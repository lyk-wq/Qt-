#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QContextMenuEvent>
#include <QNetworkAccessManager>  //  需要在pro文件中 添加  network 模块
#include <QNetworkReply>       // 网络相应头文件
#include <QMouseEvent>
#include <QMessageBox>
#include "weatherdata.h"
#include <QMenu>
#include <QMap>

#include <QTimer>






QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onReplied(QNetworkReply* reply);

    void onUpdateCity();

    void on_btnSearch_2_clicked();

    void onUpdateIcon();

protected:
    void contextMenuEvent(QContextMenuEvent *event);

    // 界面初始化
    void initUI();



    // 重写父类的虚函数
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    // 获取天气信息
    void getWeatherInfo(QString cityCode);

    // 解析 Json天气数据
    void parseJson(QByteArray &byteArray);

    // 更新数据函数
    void updateUI();

    // 重写父类的eventfilter方法
    bool eventFilter(QObject*watched,QEvent* event);

    // 绘制高低温曲线的方法
    void paintHighCurve();
    void paintLowCurve();



private:
    Ui::MainWindow *ui;

private:
    QMenu* mExitMenu;   // 右键退出菜单
    QAction* mExitAct;  // 退出的行为 - 菜单
    QPoint mOffset;     // 窗口移动时，鼠标与窗口左上角的偏移

    QNetworkAccessManager* mNetAccessManager;  // 网络

    Today mToday;
    Day mDay[7];

    // 星期和日期
    QList<QLabel*> mWeekList;
    QList<QLabel*> mDateList;


    // 天气和天气图标
    QList<QLabel*> mTypeList;
    QList<QLabel*> mTypeIconList;

    // 天气污染指数
    QList<QLabel*> mAqiList;

    // 风力和风向
    QList<QLabel*> mFxList;
    QList<QLabel*> mFlList;


    // icon图标
    QMap<QString,QPixmap> typeIconMap;

    // 定时器
    QTimer* mTimer;

    QString mCityName;

};
#endif // MAINWINDOW_H
