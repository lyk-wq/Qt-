#ifndef WEATHRTOOL_H
#define WEATHRTOOL_H
#include <QMap>
#include <QFile>

#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonValue>

#include <QMessageBox>




// 获取 citycode
class WeatherTool{
private:
    // 静态成员变量需要初始化
    static QMap<QString,QString> mCityMap;

    static void iniCityMap(){
        // 1、 读取文件
        QString filePath = ":/citycode.json";
        QFile file(filePath);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QByteArray json = file.readAll();
        file.close();
        // 2、解析，并写入到 mCityMap;
        QJsonParseError err;
        QJsonDocument doc = QJsonDocument::fromJson(json,&err);
        if(err.error != QJsonParseError::NoError){
            return;
        }

        if(!doc.isArray()){
            return;
        }

        QJsonArray cities = doc.array();
        for (int i = 0; i < cities.size(); i++) {
            QString cityname = cities[i].toObject().value("city_name").toString();
            QString citycode = cities[i].toObject().value("city_code").toString();

            //城市为空不需要添加
            if(citycode.size() > 0){
                mCityMap.insert(cityname,citycode);
            }
        }
    }

public:
    // 更具城市获取城市码
    static QString getCityCode(QString cityName){

        if(mCityMap.isEmpty()){
            iniCityMap();
        }

        QMap<QString,QString>::iterator it = mCityMap.find(cityName);
        // 天津/天津市
        if(it == mCityMap.end()){
            // 默认认为加了市  如果没找到默认没加市，加市重新查找
            // 自适应用户输入，在用户输入有没有市都可以确保都能够检索到
            it = mCityMap.find(cityName+"市");
        }
        if(it == mCityMap.end() && !cityName.split("市").isEmpty()){
                it = mCityMap.find(cityName.split("市").at(0));
        }

        if(it != mCityMap.end()){
            return it.value();
        }
        return "";
    }
};

QMap<QString,QString> WeatherTool::mCityMap = {};

#endif // WEATHRTOOL_H
