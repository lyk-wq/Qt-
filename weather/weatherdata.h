#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <QString>
#include <QTime>

class Today{
public:
    Today(){

        date = "2023-12-23";
        city = "北京";

        wendu = 0;
        shidu = "0%";
        pm25 = 0;
        quality = "无数据";

        type = "多云";

        fl = "二级";
        fx = "南风";

        high = 30;
        low =18;

        sunrise = "6:00";
        sunset = "20:00";

    }

    QString date;
    QString city;


    QString ganmao;


    int wendu;
    QString shidu;
    int pm25;
    QString quality;

    QString type;

    QString fl;
    QString fx;

    int high;
    int low;

    QString sunrise;
    QString sunset;

};




class Day{

public:
    Day(){

        date = "2023-12-23";
        week = "周六";

        type = "多云";

        high = 0;
        low = 0;

        fl = "1级";
        fx = "西北风";

        aqi = 0;

        sunrise = "6:00";
        sunset = "20:00";
    }

    QString date;
    QString week;

    QString type;

    int high;
    int low;

    QString fl;
    QString fx;

    int aqi;

    QString sunrise;
    QString sunset;

};

#endif // WEATHERDATA_H
