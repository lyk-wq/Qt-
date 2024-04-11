#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QPainter>
#include "weathrtool.h"
#include <QSystemTrayIcon>
#include <QTime>
#include <QDebug>
#include <QtWin>

#define PADDING 20
#define TEXT_OFFSET_X 8 // 文字的x偏移量
#define TEXT_OFFSET_Y 8 // 文字的y偏移量
#define POINT_RADIUS 3  // 描点大小

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initUI();




    connect(mExitAct,&QAction::triggered,this,&MainWindow::close);  // 关联右键菜单和窗口行为
    connect(ui->leCity_2,&QLineEdit::textChanged,this,&MainWindow::onUpdateIcon);




    // 网络请求和数据解析
    mNetAccessManager =  new QNetworkAccessManager(this);
    connect(mNetAccessManager,&QNetworkAccessManager::finished,this,&MainWindow::onReplied);

    // 设置搜索框回车进行搜索和去除输入文字
    connect(ui->leCity_2,&QLineEdit::returnPressed,[=]() {  //输入工况点后，回车，enter，触发信号，进行创建 对应个数的spro文件
        mCityName  = ui->leCity_2->text();
        getWeatherInfo(mCityName);
        ui->leCity_2->clearFocus(); //失去焦点       
        ui->leCity_2->setText("");
    });


    // 直接在构造中请求天气数据
    // "101010100" 是北京的城市编码

    // getWeatherInfo("101010100");
    mCityName = "天津";
    getWeatherInfo(mCityName);



    // 给标签添加事件过滤器
    // 参数指定this，也就是当前窗口对象 MainWindow
    ui->lblHighCurve_2->installEventFilter(this);
    ui->lblLowCurve_2->installEventFilter(this);

    // 定时器，页面自动更新
    mTimer = new QTimer(this);
    mTimer->setInterval(600000); // 每隔 10 分钟更新触发一次定时器
    // mTimer->setInterval(1000); // 每隔 10 分钟更新触发一次定时器
    connect(mTimer, &QTimer::timeout, this, &MainWindow::onUpdateCity);
    connect(mTimer, &QTimer::timeout, this, &MainWindow::updateUI);

    mTimer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
    mTimer->stop();
}


// 重写父类中的虚函数
// 父类中默认的实现是忽略右键菜单
void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    // 弹出右键菜单
    mExitMenu->exec(QCursor::pos());
    event->accept();
}


// 初始化程序界面
void MainWindow::initUI()
{
    // 设置应用程序图标
    setWindowIcon(QIcon(":/res/weatherIcon.svg"));

    setWindowFlags(Qt::FramelessWindowHint); // 设置窗口无边框

    // 实现窗口的毛玻璃效果
    // QtWin::enableBlurBehindWindow(this);


    setFixedSize(width(),height()); // 设置固定窗口大小
    mExitMenu = new QMenu(this);
    mExitAct = new QAction(this);

    // 设置右键退出按钮
    mExitAct->setText("退出");
    mExitAct->setIcon(QIcon(":/res/Close.svg"));
    mExitMenu->addAction(mExitAct);
    mExitMenu->setStyleSheet(R"(
        font:20px "songti";
        background-color: #2e2f30;
        color: #ffffff;
        )");



    // 初始化搜索按钮图标
    ui->btnSearch_2->setIcon(QIcon(":/res/update.svg"));

    // UI 初始化
    // 将控件添加到控件数组，方便使用循环进行处理
    // week星期
    mWeekList << ui->lblWeek0_2 << ui->lblWeek1_2 << ui->lblWeek2_2 << ui->lblWeek3_2 << ui->lblWeek4_2 << ui->lblWeek5_2;

    // date日期
    mDateList << ui->lblDate0_2  << ui->lblDate1_2 << ui->lblDate2_2 << ui->lblDate3_2 << ui->lblDate4_2 << ui->lblDate5_2;

    // tpyeIcon 天气图标
    mTypeIconList << ui->lblTypeIcon0_2 << ui->lblTypeIcon1_2 << ui->lblTypeIcon2_2 << ui->lblTypeIcon3_2 << ui->lblTypeIcon4_2 << ui->lblTypeIcon5_2;

    // tpye 天气
    mTypeList << ui->lblType0_2 << ui->lblType1_2 << ui->lblType2_2 << ui->lblType3_2 << ui->lblType4_2 << ui->lblType5_2;

    // aqi 空气质量
    mAqiList << ui->lblQuality0_2 << ui->lblQuality1_2 << ui->lblQuality2_2 << ui->lblQuality3_2 << ui->lblQuality4_2 << ui->lblQuality5_2;

    // fx 风向
    mFxList << ui->lblFx0_2 << ui->lblFx1_2 << ui->lblFx2_2 << ui->lblFx3_2 << ui->lblFx4_2 << ui->lblFx5_2;

    // fl 风力
    mFlList << ui->lblFl0_2 << ui->lblFl1_2 << ui->lblFl2_2 << ui->lblFl3_2 << ui->lblFl4_2 << ui->lblFl5_2;

    //初始化图标
    QPixmap pixmapSun = QPixmap(":/res/SunRise.svg");
    ui->lblSun->setFixedSize(ui->lblSun->size());

    ui->lblSun->setPixmap(pixmapSun.scaled(ui->lblSun->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));


    QPixmap pixmap = QPixmap(":/res/type/Qing.svg");
    for (int i = 0; i < 6; ++i) {
        mTypeIconList[i]->setPixmap(pixmap.scaled(mTypeIconList[i]->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        mTypeList[i]->setText("晴");
    }
    ui->lblTypeIcon_2->setPixmap(pixmap.scaled(ui->lblTypeIcon_2->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    QPixmap location = QPixmap(":/res/location.svg");
    ui->lbladdrIcon->setFixedSize(ui->lbladdrIcon->size());
    ui->lbladdrIcon->setPixmap(location.scaled(ui->lbladdrIcon->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));


    // icon 天气类型图标
    typeIconMap.insert("暴雪",QPixmap(":/res/type/BaoXue.svg"));
    typeIconMap.insert("暴雨",QPixmap(":/res/type/BaoYu.svg"));
    typeIconMap.insert("暴雨到大暴雨",QPixmap(":/res/type/BaoYuDaoDaBaoYu.svg"));
    typeIconMap.insert("大暴雨",QPixmap(":/res/type/DaBaoYu.svg"));
    typeIconMap.insert("大暴雨到特大暴雨",QPixmap(":/res/type/DaBaoYuDaoTeDaoBaoYu.svg"));
    typeIconMap.insert("大到暴雪",QPixmap(":/res/type/DaDaoBaoXue.svg"));
    typeIconMap.insert("大到暴雨",QPixmap(":/res/type/DaDaoBaoYu.svg"));

    typeIconMap.insert("大雪",QPixmap(":/res/type/DaXue.svg"));
    typeIconMap.insert("大雨",QPixmap(":/res/type/DaYu.svg"));
    typeIconMap.insert("冻雨",QPixmap(":/res/type/DongYu.svg"));
    typeIconMap.insert("多云",QPixmap(":/res/type/DuoYun.svg"));
    typeIconMap.insert("浮尘",QPixmap(":/res/type/FuChen.svg"));

    typeIconMap.insert("雷阵雨",QPixmap(":/res/type/LeiZhenYu.svg"));
    typeIconMap.insert("雷阵雨伴有冰雹",QPixmap(":/res/type/LeiZhenYuBanYouBingBao.svg"));
    typeIconMap.insert("霾",QPixmap(":/res/type/Mai.svg"));
    typeIconMap.insert("强沙尘暴",QPixmap(":/res/type/QiangShaChenBao.svg"));
    typeIconMap.insert("晴",QPixmap(":/res/type/Qing.svg"));
    typeIconMap.insert("沙尘暴",QPixmap(":/res/type/ShaChenBao.svg"));

    typeIconMap.insert("特大暴雨",QPixmap(":/res/type/TeDaBaoYu.svg"));

    typeIconMap.insert("undefined",QPixmap(":/res/type/undefined.svg"));

    typeIconMap.insert("雾",QPixmap(":/res/type/Wu.svg"));
    typeIconMap.insert("小到中雪",QPixmap(":/res/type/XiaoDaoZhongXue.svg"));
    typeIconMap.insert("小到中雨",QPixmap(":/res/type/XiaoDaoZhongYu.svg"));
    typeIconMap.insert("小雪",QPixmap(":/res/type/XiaoXue.svg"));
    typeIconMap.insert("小雨",QPixmap(":/res/type/XiaoYu.svg"));
    typeIconMap.insert("雪",QPixmap(":/res/type/Xue.svg"));

    typeIconMap.insert("扬沙",QPixmap(":/res/type/YangSha.svg"));
    typeIconMap.insert("阴",QPixmap(":/res/type/Yin.svg"));
    typeIconMap.insert("雨",QPixmap(":/res/type/Yu.png"));
    typeIconMap.insert("雨加雪",QPixmap(":/res/type/YuJiaXue.svg"));
    typeIconMap.insert("阵雨",QPixmap(":/res/type/ZhenYu.svg"));
    typeIconMap.insert("阵雪",QPixmap(":/res/type/ZhenXue.svg"));
    typeIconMap.insert("中到大雪",QPixmap(":/res/type/ZhongDaoDaXue.svg"));
    typeIconMap.insert("中到大雨",QPixmap(":/res/type/ZhongDaoDaYu.svg"));
    typeIconMap.insert("中雪",QPixmap(":/res/type/ZhongXue.svg"));
    typeIconMap.insert("中雨",QPixmap(":/res/type/ZhongYu.svg"));
}

// 鼠标按下事件
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    mOffset = event->globalPos()-this->pos();
}

// 鼠标移动事件
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos()-mOffset);
}


// http get请求
void MainWindow::getWeatherInfo(QString cityName)
{
    QString cityCode = WeatherTool::getCityCode(cityName);

    if(cityCode.isEmpty()){
        QMessageBox::warning(this,"天气","请检查城市名称是否输入错误！",QMessageBox::Ok);
        return;
    }

    QUrl url("http://t.weather.sojson.com/api/weather/city/"+cityCode);
    mNetAccessManager->get(QNetworkRequest(url));
}



// 解析 Json 数据
void MainWindow::parseJson(QByteArray &byteArray)
{
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(byteArray,&err);
    if(err.error != QJsonParseError::NoError){
        return;
    }

    QJsonObject rootObj = doc.object();
    // qDebug() << rootObj.value("message").toString();


    // 1. 解析日期和城市
    mToday.date = rootObj.value("date").toString();
    mToday.city = rootObj.value("cityInfo").toObject().value("city").toString();


    // 2. 解析yesterday
    QJsonObject objData = rootObj.value("data").toObject();

    QJsonObject objYesterday = objData.value("yesterday").toObject();
    mDay[0].week = objYesterday.value("week").toString();

    mDay[0].date = objYesterday.value("ymd").toString();
    mDay[0].type = objYesterday.value("type").toString();
    mDay[0].fx = objYesterday.value("fx").toString();
    mDay[0].fl = objYesterday.value("fl").toString();
    mDay[0].aqi = objYesterday.value("aqi").toDouble();

    // 获取最高温度
    QString s;
    s = objYesterday.value("high").toString().split(" ").at(1); // 取出：18℃
    s = s.left(s.length()-1);  // 18 去掉  摄氏度符号
    mDay[0].high = s.toInt();


    // 获取最低温度
    s = objYesterday.value("low").toString().split(" ").at(1); // 取出：18°
    s = s.left(s.length()-1);  // 18
    mDay[0].low = s.toInt();





    // 3. 解析forcast中5天的数据
    QJsonArray forcastArr = objData.value("forecast").toArray();
    for (int var = 0; var < 6; ++var) {

        mDay[var+1].date = forcastArr[var].toObject().value("ymd").toString();

        mDay[var+1].week = forcastArr[var].toObject().value("week").toString();

        mDay[var+1].type = forcastArr[var].toObject().value("type").toString();
        mDay[var+1].fx = forcastArr[var].toObject().value("fx").toString();
        mDay[var+1].fl = forcastArr[var].toObject().value("fl").toString();
        mDay[var+1].sunrise = forcastArr[var].toObject().value("sunrise").toString();
        mDay[var+1].sunset = forcastArr[var].toObject().value("sunset").toString();


        mDay[var+1].aqi = forcastArr[var].toObject().value("aqi").toDouble();

        QString s;
        s = forcastArr[var].toObject().value("high").toString();
        s = s.split(" ").at(1);
        s = s.left(s.length()-1);
        mDay[var+1].high = s.toInt();
        // qDebug() << "高温" <<mDay[var+1].high;


        s = forcastArr[var].toObject().value("low").toString();
        s = s.split(" ").at(1);
        s = s.left(s.length()-1);
        mDay[var+1].low = s.toInt();
        // qDebug() << "低温" <<mDay[var+1].high;
    }


    // 4. 解析今天的数据
    mToday.shidu = objData.value("shidu").toString();
    mToday.pm25 = objData.value("pm25").toDouble();
    mToday.quality = objData.value("quality").toString();
    mToday.ganmao = objData.value("ganmao").toString();
    mToday.wendu = objData.value("wendu").toString().toInt();
    // qDebug() << "当前温度："<< mToday.wendu;

    mToday.high = mDay[1].high;
    mToday.low = mDay[1].low;
    mToday.fl = mDay[1].fl;
    mToday.fx = mDay[1].fx;
    mToday.type = mDay[1].type;

    // 解析日出日落
    mToday.sunrise = mDay[1].sunrise;
    mToday.sunset = mDay[1].sunset;


    // 6、更新UI数据
    updateUI();

    // 更新曲线(不加查询信息不会刷新曲线)
    ui->lblLowCurve_2->update();
    ui->lblHighCurve_2->update();
}

// http 网络请求获取数据 获取 信号返回来的  数据reply
void MainWindow::onReplied(QNetworkReply *reply)
{
    // qDebug() << "onReplied success";

    int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();  // 响应码
    // qDebug() << "operation: " << reply->operation();
    // qDebug() << "statusCode: " << statusCode;
    // qDebug() << "url: " << reply->url();
    // qDebug() << "raw header: " << reply->rawHeaderList();

    if(reply->error() != QNetworkReply::NoError || statusCode != 200){
        // 数据获取失败
        // qDebug() << reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","数据请求失败",QMessageBox::Ok);
    } else {
        // 获取相应信息
        QByteArray byteArry = reply->readAll();
        qDebug() << "read all:" <<byteArry.data();
        parseJson(byteArry);
    }

    reply->deleteLater();
}


// 更新UI数据
void MainWindow::updateUI()
{
    // ui->lblDate_2->setText(mToday.date);
    // 更新日期和星期
    // 获取数据具有延后行，导致在数据查询过程中数据和时间不一致需要解决
    // ui->lblDate_2->setText(QDateTime::fromString(mToday.date,"yyyyMMdd").toString("yyyy/MM/dd") + " " + mDay[1].week);
    ui->lblDate_2->setText(QDate::currentDate().toString("yyyy/MM/dd") + " " + QDateTime::currentDateTime().toString("ddd"));

    // 更新城市
    ui->lblCity_2->setText(mToday.city);

    //更新日出日落 白天晚上
    // QString sunrise = QDate::currentDate().toString("yyyy-MM-dd") + " " + mToday.sunrise +":00";
    QString sunriseBefore = QDateTime::currentDateTime().addSecs(-1800).toString("hh:mm");
    QString sunriseLater = QDateTime::currentDateTime().addSecs(1800).toString("hh:mm");

    // QString sunriseBefore = "6:42";
    // QString sunriseLater = "7:42";


    // qDebug() << "日出时间：" << mToday.sunrise;
    // mToday.sunrise = "2023-12-26 07:05";
    // mToday.sunrise = "2023-12-26 16:05";

    // 代码的问题，没有考虑到晚上时间是跨 24 小时的情况导致显示有问题
    // 解决这个问题  需要处理跨夜晚的时候
    // 考虑加入日期进行判断（只加月份在跨年的时候会出问题，需要加上年月日进行比较）
    if(sunriseLater >=  mToday.sunrise && sunriseBefore <= mToday.sunrise ){
        ui->lblSunText->setText("日出");
        // qDebug() << sunriseLater + ">="  + mToday.sunrise + "&&" + sunriseBefore + "<=" + mToday.sunrise;
        QPixmap pixmapSun = QPixmap(":/res/SunRise.svg");
        ui->lblSun->setFixedSize(ui->lblSun->size());
        ui->lblSun->setPixmap(pixmapSun.scaled(ui->lblSun->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else if(sunriseBefore > mToday.sunrise  && sunriseLater < mToday.sunset){
        ui->lblSunText->setText("白天");
        // qDebug() << sunriseBefore << ">" << mToday.sunrise << "&&" << sunriseLater << "<" <<mToday.sunset;
        QPixmap pixmapSun = QPixmap(":/res/Bai.svg");
        ui->lblSun->setFixedSize(ui->lblSun->size());
        ui->lblSun->setPixmap(pixmapSun.scaled(ui->lblSun->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else if(sunriseLater >= mToday.sunset && sunriseBefore <= mToday.sunset){
        ui->lblSunText->setText("日落");
        QPixmap pixmapSun = QPixmap(":/res/SunSet.svg");
        ui->lblSun->setFixedSize(ui->lblSun->size());
        ui->lblSun->setPixmap(pixmapSun.scaled(ui->lblSun->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }   else {
        ui->lblSunText->setText("夜晚");
        // qDebug() << sunriseLater + " "  + mToday.sunrise + "//" + sunriseBefore + " " + mToday.sunrise;
        QPixmap pixmapSun = QPixmap(":/res/Ye.svg");
        ui->lblSun->setFixedSize(ui->lblSun->size());
        ui->lblSun->setPixmap(pixmapSun.scaled(ui->lblSun->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }


    // 更新当前天气 type
    ui->lblType_2->setText(mToday.type);


    // 更新今天的最高最低气温 low high
    ui->lblLowHigh_2->setText( QString::number(mToday.high)+"°"+ "/"+ QString::number(mToday.low) + "°");

    // 更新当前温度
    ui->lblTemp_2->setText(QString::number(mToday.wendu)+"°");

    // 更新fx
    ui->lblWindFx_2->setText(mToday.fx);

    // 更新fl
    ui->lblWindFl_2->setText(mToday.fl);

    // 更新pm25
    ui->lblPM25_2->setText(QString::number(mToday.pm25));

    // 更新 shidu
    ui->lblShiDu_2->setText(mToday.shidu);

    // 更新空气质量 aqi
    ui->lblQuality_2->setText(mToday.quality);

    // 更新感冒
    ui->lblGanMao_2->setText("天气建议："+mToday.ganmao);



    // 更新天气图标
    ui->lblTypeIcon_2->setPixmap(typeIconMap.value(mToday.type).scaled(ui->lblTypeIcon_2->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    // qDebug() << typeIconMap.value(mToday.type);


    // 更新右边信息
    for (int i = 0; i < 6; ++i) {
        if( i == 0){
            mWeekList[i]->setText("昨天");
        } else if(i == 1){
            mWeekList[i]->setText("今天");
        } else if(i == 2){
            mWeekList[i]->setText("明天");
        } else{
            mWeekList[i]->setText("周"+mDay[i].week.right(1));
        }


        // 更新日期和天气情况
        mDateList[i]->setText(QDateTime::fromString(mDay[i].date,"yyyy-mm-dd").toString("mm/dd"));
        mTypeList[i]->setText(mDay[i].type);

        // 更新天气图标
        mTypeIconList[i]->setPixmap(typeIconMap.value(mDay[i].type).scaled(mTypeIconList[i]->size(),Qt::KeepAspectRatio, Qt::SmoothTransformation));

        // 需要根据 aqi 数据转换成 质量等级
        if( mDay[i].aqi >= 0 && mDay[i].aqi <= 50){

            mAqiList[i]->setText("优");
            mAqiList[i]->setStyleSheet("background-color:#79b800");

        } else if(mDay[i].aqi > 50 && mDay[i].aqi <= 100){
            mAqiList[i]->setText("良");
            mAqiList[i]->setStyleSheet("background-color:#ffbb17");

        } else if(mDay[i].aqi > 100 && mDay[i].aqi <= 150){
            mAqiList[i]->setText("轻度");
            mAqiList[i]->setStyleSheet("background-color:#ff5761");

        }
        else if(mDay[i].aqi > 150 && mDay[i].aqi <= 200){
            mAqiList[i]->setText("中度");
            mAqiList[i]->setStyleSheet("background-color:#eb111b");
        }
        else if(mDay[i].aqi > 200 && mDay[i].aqi <= 300){
            mAqiList[i]->setText("重度");
            mAqiList[i]->setStyleSheet("background-color:#aa0000");

        }
        else if(mDay[i].aqi > 300){
            mAqiList[i]->setText("严重");
            mAqiList[i]->setStyleSheet("background-color:#6e0000");
        }
        // [](){mAqiList[i]->setText(QString::number(mDay[i].aqi)};

        // 更新风向和风力
        mFxList[i]->setText(mDay[i].fx);
        mFlList[i]->setText(mDay[i].fl);

    }
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->lblHighCurve_2 && event->type() == QEvent::Paint){
        paintHighCurve();
    }

    if(watched == ui->lblLowCurve_2 && event->type() == QEvent::Paint){
        paintLowCurve();
    }
    return QWidget::eventFilter(watched,event);
}

void MainWindow::paintHighCurve()
{
    QPainter painter(ui->lblHighCurve_2);  // 画家类，画到 lblHighCurve_2 上
    // 抗锯齿
    painter.setRenderHint(QPainter::Antialiasing,true);
    // 1.获取x坐标
    int pointX[6] = {0};
    for(int i = 0; i < 6; i++){
        pointX[i] = mAqiList[i]->pos().x() + mAqiList[i]->width() / 2 - 10;
        // qDebug() <<  pointX[i] << "==";
    }
    // 2.获取y坐标
    int pointY[6] = {0};
    QList<int> high;
    for (int i = 0; i < 6; ++i) {
        high.append(mDay[i].high);
        // qDebug() << mDay[i].high;
        // qDebug() << high.at(i);
    }
    std::sort(high.begin(),high.end());  // 对high从新排序
    int HighDiv = high[5]-high[0];  // 计算高温温度差
    int yHighOffset;
    if(HighDiv != 0){
        yHighOffset = (ui->lblHighCurve_2->height()-2*PADDING) / HighDiv ;  // 温度升高一度 y坐标的增量
        // 因为数据high中没有数据导致了错误，因为 除数为 0 了。
        // 主要原因是 mDay[i].high 中没有数据导致的错误
        // qDebug() << yHighOffset << '-';
        // 计算 Y 的位置
    }
    else{
        yHighOffset = 0 ;  // 温度升高一度 y坐标的增量
    }

    for (int i = 0; i < 6; ++i) {
        pointY[i] = (ui->lblHighCurve_2->height() - PADDING) - yHighOffset * (mDay[i].high-high[0]);
        // qDebug() << pointY[i];
    }

    // 3.开始绘制
    // 初始化画笔
    QPen pen = painter.pen();                // 定义画家的画笔
    pen.setWidth(1);                         // 设置画笔宽度
    pen.setColor(QColor(255,170,0));         // 设置画笔颜色
    painter.setPen(pen);                     // 画家拿起画笔
    painter.setBrush(QColor(255,170,0));     // 设置画刷 内部填充

    // 3.2 画点、 写文本
    for(int i = 0; i < 6; i++){
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),POINT_RADIUS,POINT_RADIUS);
        painter.drawText(QPoint(pointX[i]-TEXT_OFFSET_X,pointY[i]-TEXT_OFFSET_Y),QString::number(mDay[i].high)+"°");
    }

    // 3.3 绘制曲线
    for (int i = 0; i < 5; ++i) {
        if(i == 0){
            pen.setStyle(Qt::DotLine);
            painter.setPen(pen);
            painter.drawLine(QPoint(pointX[i],pointY[i]),QPoint(pointX[i+1],pointY[i+1]));
        } else{
            pen.setStyle(Qt::SolidLine);
            painter.setPen(pen);
            painter.drawLine(QPoint(pointX[i],pointY[i]),QPoint(pointX[i+1],pointY[i+1]));
        }
    }

    // painter.restore();
}

void MainWindow::paintLowCurve()
{
    QPainter painter(ui->lblLowCurve_2);  // 画家类，画到 lblLowCurve_2 上
    // 抗锯齿
    painter.setRenderHint(QPainter::Antialiasing,true);
    // 1.获取x坐标
    int pointX[6] = {0};
    for(int i = 0; i < 6; i++){
        pointX[i] = mAqiList[i]->pos().x() + mAqiList[i]->width() / 2 - 10;
        // qDebug() <<  pointX[i] << "==";
    }
    // 2.获取y坐标
    int pointY[6] = {0};
    QList<int> low;
    for (int i = 0; i < 6; ++i) {
        low.append(mDay[i].low);
        // qDebug()<<mDay[i].low;
    }
    std::sort(low.begin(),low.end());
    int LowDiv = low[5]-low[0];  // 计算高温温度差

    int yLowOffset;  // 温度升高一度 y的增量

    if(LowDiv != 0){
        yLowOffset = (ui->lblLowCurve_2->height()-2*PADDING) / LowDiv ;  // 温度升高一度 y的增量
        // 因为数据high中没有数据导致了错误，因为 除数为 0 了。
        // 主要原因是 mDay[i].high 中没有数据导致的错误
        // qDebug() << yHighOffset << '-';
        // 计算 Y 的位置
    }
    else{
        yLowOffset = 0 ;  // 温度升高一度 y坐标的增量
    }

    // 计算 Y 的位置
    for (int i = 0; i < 6; ++i) {
        pointY[i] = (ui->lblLowCurve_2->height() - PADDING) - yLowOffset * (mDay[i].low-low[0]);
        // qDebug() << pointY[i];
    }

    // 3.开始绘制
    // 初始化画笔
    QPen pen = painter.pen();   // 定义画家的画笔
    pen.setWidth(1);             // 设置画笔宽度
    pen.setColor(QColor( 33, 240,  36));  // 设置画笔颜色
    painter.setPen(pen);  // 画家拿起画笔
    painter.setBrush(QColor(0,255,255));     // 设置画刷 内部填充

    // 3.2 画点、 写文本
    for(int i = 0; i < 6; i++){
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),POINT_RADIUS,POINT_RADIUS);   // 使用绘制椭圆绘制点
        painter.drawText(QPoint(pointX[i]-TEXT_OFFSET_X,pointY[i]-TEXT_OFFSET_Y),QString::number(mDay[i].low)+"°");
    }

    // 3.3 绘制曲线
    for (int i = 0; i < 5; ++i) {
        if(i == 0){
            pen.setStyle(Qt::DotLine);
            painter.setPen(pen);
            painter.drawLine(QPoint(pointX[i],pointY[i]),QPoint(pointX[i+1],pointY[i+1]));
        } else{
            pen.setStyle(Qt::SolidLine);
            painter.setPen(pen);
            painter.drawLine(QPoint(pointX[i],pointY[i]),QPoint(pointX[i+1],pointY[i+1]));
        }
    }
    // painter.restore();
}


void MainWindow::onUpdateCity()
{
    getWeatherInfo(mCityName);
}


// 搜索按钮的槽函数
void MainWindow::on_btnSearch_2_clicked()
{
    if(ui->leCity_2->text().isEmpty()){
        getWeatherInfo(mCityName);
    }
    else {
        mCityName = ui->leCity_2->text();
        getWeatherInfo(mCityName);
        ui->leCity_2->setText("");
    }
}


// 槽函数  更新按钮图标
void MainWindow::onUpdateIcon()
{
    if(ui->leCity_2->text().isEmpty()){
        ui->btnSearch_2->setIcon(QIcon(":/res/update.svg"));
    }
    else {
        ui->btnSearch_2->setIcon(QIcon(":/res/Search.svg"));
    }
}

