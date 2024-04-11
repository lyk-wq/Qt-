/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *leCity_2;
    QPushButton *btnSearch_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *lblDate_2;
    QWidget *widget_16;
    QVBoxLayout *verticalLayout_17;
    QWidget *widget_17;
    QGridLayout *gridLayout_6;
    QLabel *lblWeek0_2;
    QLabel *lblWeek1_2;
    QLabel *lblWeek2_2;
    QLabel *lblWeek3_2;
    QLabel *lblWeek4_2;
    QLabel *lblWeek5_2;
    QLabel *lblDate0_2;
    QLabel *lblDate1_2;
    QLabel *lblDate2_2;
    QLabel *lblDate3_2;
    QLabel *lblDate4_2;
    QLabel *lblDate5_2;
    QWidget *widget_18;
    QGridLayout *gridLayout_7;
    QLabel *lblTypeIcon3_2;
    QLabel *lblTypeIcon0_2;
    QLabel *lblTypeIcon2_2;
    QLabel *lblType0_2;
    QLabel *lblType3_2;
    QLabel *lblTypeIcon5_2;
    QLabel *lblType5_2;
    QLabel *lblType4_2;
    QLabel *lblTypeIcon1_2;
    QLabel *lblType2_2;
    QLabel *lblTypeIcon4_2;
    QLabel *lblType1_2;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_20;
    QLabel *lblQuality0_2;
    QLabel *lblQuality1_2;
    QLabel *lblQuality2_2;
    QLabel *lblQuality3_2;
    QLabel *lblQuality4_2;
    QLabel *lblQuality5_2;
    QWidget *widget_20;
    QVBoxLayout *verticalLayout_18;
    QLabel *lblHighCurve_2;
    QLabel *lblLowCurve_2;
    QWidget *widget_21;
    QGridLayout *gridLayout_8;
    QLabel *lblFx0_2;
    QLabel *lblFx1_2;
    QLabel *lblFx2_2;
    QLabel *lblFx3_2;
    QLabel *lblFx4_2;
    QLabel *lblFx5_2;
    QLabel *lblFl0_2;
    QLabel *lblFl1_2;
    QLabel *lblFl2_2;
    QLabel *lblFl3_2;
    QLabel *lblFl4_2;
    QLabel *lblFl5_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_12;
    QLabel *lblCity_2;
    QLabel *lblSun;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblTemp_2;
    QLabel *lblLowHigh_2;
    QLabel *lbladdrIcon;
    QLabel *lblSunText;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *lblTypeIcon_2;
    QLabel *lblType_2;
    QWidget *widget_14;
    QVBoxLayout *verticalLayout_12;
    QLabel *lblGanMao_2;
    QWidget *widget_15;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_16;
    QLabel *lblWindIcon_2;
    QVBoxLayout *verticalLayout_13;
    QLabel *lblWindFx_2;
    QLabel *lblWindFl_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *lblPm25Icon_2;
    QVBoxLayout *verticalLayout_14;
    QLabel *lblPM25Title_2;
    QLabel *lblPM25_2;
    QHBoxLayout *horizontalLayout_18;
    QLabel *lblShiDuIcon_2;
    QVBoxLayout *verticalLayout_15;
    QLabel *lblShiDuTitle_2;
    QLabel *lblShiDu_2;
    QHBoxLayout *horizontalLayout_19;
    QLabel *lblQualityIcon_2;
    QVBoxLayout *verticalLayout_16;
    QLabel *lblQualityTitle_2;
    QLabel *lblQuality_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 450);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 800, 450));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image: url(:/res/background.png);\n"
"}\n"
"\n"
"\n"
"QLabel {\n"
"	font: 25 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius: 4px;\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
""));
        widget_13 = new QWidget(widget);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setGeometry(QRect(0, 0, 801, 49));
        widget_13->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 170, 255,0);"));
        horizontalLayout_8 = new QHBoxLayout(widget_13);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(15, -1, 20, -1);
        leCity_2 = new QLineEdit(widget_13);
        leCity_2->setObjectName(QString::fromUtf8("leCity_2"));
        leCity_2->setMinimumSize(QSize(200, 0));
        leCity_2->setMaximumSize(QSize(200, 16777215));
        leCity_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;\n"
"padding: 1px 5px"));

        horizontalLayout_8->addWidget(leCity_2);

        btnSearch_2 = new QPushButton(widget_13);
        btnSearch_2->setObjectName(QString::fromUtf8("btnSearch_2"));
        btnSearch_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(157, 133, 255,0);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgba( 41, 102, 147,0.5);\n"
"	color:white;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"                    \n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/Search.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnSearch_2->setIcon(icon);

        horizontalLayout_8->addWidget(btnSearch_2);

        horizontalSpacer_6 = new QSpacerItem(309, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        lblDate_2 = new QLabel(widget_13);
        lblDate_2->setObjectName(QString::fromUtf8("lblDate_2"));
        lblDate_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";\n"
"background-color: rgba(255, 255, 255,0);"));
        lblDate_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lblDate_2);

        widget_16 = new QWidget(widget);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setGeometry(QRect(360, 40, 451, 411));
        verticalLayout_17 = new QVBoxLayout(widget_16);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        widget_17 = new QWidget(widget_16);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(0, 200, 200,0.6);\n"
"	border-radius: 4px;\n"
"	color:rgb(255,255,255);\n"
"}"));
        gridLayout_6 = new QGridLayout(widget_17);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(6);
        gridLayout_6->setVerticalSpacing(0);
        lblWeek0_2 = new QLabel(widget_17);
        lblWeek0_2->setObjectName(QString::fromUtf8("lblWeek0_2"));
        lblWeek0_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek0_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblWeek0_2, 0, 0, 1, 1);

        lblWeek1_2 = new QLabel(widget_17);
        lblWeek1_2->setObjectName(QString::fromUtf8("lblWeek1_2"));
        lblWeek1_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek1_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblWeek1_2, 0, 1, 1, 1);

        lblWeek2_2 = new QLabel(widget_17);
        lblWeek2_2->setObjectName(QString::fromUtf8("lblWeek2_2"));
        lblWeek2_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek2_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblWeek2_2, 0, 2, 1, 1);

        lblWeek3_2 = new QLabel(widget_17);
        lblWeek3_2->setObjectName(QString::fromUtf8("lblWeek3_2"));
        lblWeek3_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek3_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblWeek3_2, 0, 3, 1, 1);

        lblWeek4_2 = new QLabel(widget_17);
        lblWeek4_2->setObjectName(QString::fromUtf8("lblWeek4_2"));
        lblWeek4_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek4_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblWeek4_2, 0, 4, 1, 1);

        lblWeek5_2 = new QLabel(widget_17);
        lblWeek5_2->setObjectName(QString::fromUtf8("lblWeek5_2"));
        lblWeek5_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek5_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblWeek5_2, 0, 5, 1, 1);

        lblDate0_2 = new QLabel(widget_17);
        lblDate0_2->setObjectName(QString::fromUtf8("lblDate0_2"));
        lblDate0_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate0_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblDate0_2, 1, 0, 1, 1);

        lblDate1_2 = new QLabel(widget_17);
        lblDate1_2->setObjectName(QString::fromUtf8("lblDate1_2"));
        lblDate1_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate1_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblDate1_2, 1, 1, 1, 1);

        lblDate2_2 = new QLabel(widget_17);
        lblDate2_2->setObjectName(QString::fromUtf8("lblDate2_2"));
        lblDate2_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate2_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblDate2_2, 1, 2, 1, 1);

        lblDate3_2 = new QLabel(widget_17);
        lblDate3_2->setObjectName(QString::fromUtf8("lblDate3_2"));
        lblDate3_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate3_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblDate3_2, 1, 3, 1, 1);

        lblDate4_2 = new QLabel(widget_17);
        lblDate4_2->setObjectName(QString::fromUtf8("lblDate4_2"));
        lblDate4_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate4_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblDate4_2, 1, 4, 1, 1);

        lblDate5_2 = new QLabel(widget_17);
        lblDate5_2->setObjectName(QString::fromUtf8("lblDate5_2"));
        lblDate5_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate5_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblDate5_2, 1, 5, 1, 1);


        verticalLayout_17->addWidget(widget_17);

        widget_18 = new QWidget(widget_16);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        widget_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	border-radius: 4px;\n"
"}"));
        gridLayout_7 = new QGridLayout(widget_18);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(0);
        gridLayout_7->setContentsMargins(-1, 5, -1, 5);
        lblTypeIcon3_2 = new QLabel(widget_18);
        lblTypeIcon3_2->setObjectName(QString::fromUtf8("lblTypeIcon3_2"));
        lblTypeIcon3_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon3_2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon3_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblTypeIcon3_2, 0, 3, 1, 1);

        lblTypeIcon0_2 = new QLabel(widget_18);
        lblTypeIcon0_2->setObjectName(QString::fromUtf8("lblTypeIcon0_2"));
        lblTypeIcon0_2->setEnabled(true);
        lblTypeIcon0_2->setMinimumSize(QSize(0, 0));
        lblTypeIcon0_2->setMaximumSize(QSize(1000, 1000));
        lblTypeIcon0_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon0_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblTypeIcon0_2, 0, 0, 1, 1);

        lblTypeIcon2_2 = new QLabel(widget_18);
        lblTypeIcon2_2->setObjectName(QString::fromUtf8("lblTypeIcon2_2"));
        lblTypeIcon2_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon2_2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon2_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblTypeIcon2_2, 0, 2, 1, 1);

        lblType0_2 = new QLabel(widget_18);
        lblType0_2->setObjectName(QString::fromUtf8("lblType0_2"));
        lblType0_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType0_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblType0_2, 1, 0, 1, 1);

        lblType3_2 = new QLabel(widget_18);
        lblType3_2->setObjectName(QString::fromUtf8("lblType3_2"));
        lblType3_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType3_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblType3_2, 1, 3, 1, 1);

        lblTypeIcon5_2 = new QLabel(widget_18);
        lblTypeIcon5_2->setObjectName(QString::fromUtf8("lblTypeIcon5_2"));
        lblTypeIcon5_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon5_2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/BaoYu.png")));
        lblTypeIcon5_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblTypeIcon5_2, 0, 5, 1, 1);

        lblType5_2 = new QLabel(widget_18);
        lblType5_2->setObjectName(QString::fromUtf8("lblType5_2"));
        lblType5_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType5_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblType5_2, 1, 5, 1, 1);

        lblType4_2 = new QLabel(widget_18);
        lblType4_2->setObjectName(QString::fromUtf8("lblType4_2"));
        lblType4_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType4_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblType4_2, 1, 4, 1, 1);

        lblTypeIcon1_2 = new QLabel(widget_18);
        lblTypeIcon1_2->setObjectName(QString::fromUtf8("lblTypeIcon1_2"));
        lblTypeIcon1_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon1_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblTypeIcon1_2, 0, 1, 1, 1);

        lblType2_2 = new QLabel(widget_18);
        lblType2_2->setObjectName(QString::fromUtf8("lblType2_2"));
        lblType2_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType2_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblType2_2, 1, 2, 1, 1);

        lblTypeIcon4_2 = new QLabel(widget_18);
        lblTypeIcon4_2->setObjectName(QString::fromUtf8("lblTypeIcon4_2"));
        lblTypeIcon4_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon4_2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/ZhongYu.png")));
        lblTypeIcon4_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblTypeIcon4_2, 0, 4, 1, 1);

        lblType1_2 = new QLabel(widget_18);
        lblType1_2->setObjectName(QString::fromUtf8("lblType1_2"));
        lblType1_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType1_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblType1_2, 1, 1, 1, 1);


        verticalLayout_17->addWidget(widget_18);

        widget_19 = new QWidget(widget_16);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        horizontalLayout_20 = new QHBoxLayout(widget_19);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(-1, 5, -1, 5);
        lblQuality0_2 = new QLabel(widget_19);
        lblQuality0_2->setObjectName(QString::fromUtf8("lblQuality0_2"));
        lblQuality0_2->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 184, 0);\n"
"padding:8px;"));
        lblQuality0_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(lblQuality0_2);

        lblQuality1_2 = new QLabel(widget_19);
        lblQuality1_2->setObjectName(QString::fromUtf8("lblQuality1_2"));
        lblQuality1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 187, 23);"));
        lblQuality1_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(lblQuality1_2);

        lblQuality2_2 = new QLabel(widget_19);
        lblQuality2_2->setObjectName(QString::fromUtf8("lblQuality2_2"));
        lblQuality2_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 87, 97);"));
        lblQuality2_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(lblQuality2_2);

        lblQuality3_2 = new QLabel(widget_19);
        lblQuality3_2->setObjectName(QString::fromUtf8("lblQuality3_2"));
        lblQuality3_2->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 17, 27);"));
        lblQuality3_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(lblQuality3_2);

        lblQuality4_2 = new QLabel(widget_19);
        lblQuality4_2->setObjectName(QString::fromUtf8("lblQuality4_2"));
        lblQuality4_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        lblQuality4_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(lblQuality4_2);

        lblQuality5_2 = new QLabel(widget_19);
        lblQuality5_2->setObjectName(QString::fromUtf8("lblQuality5_2"));
        lblQuality5_2->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);"));
        lblQuality5_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(lblQuality5_2);


        verticalLayout_17->addWidget(widget_19);

        widget_20 = new QWidget(widget_16);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        verticalLayout_18 = new QVBoxLayout(widget_20);
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(-1, 5, -1, 5);
        lblHighCurve_2 = new QLabel(widget_20);
        lblHighCurve_2->setObjectName(QString::fromUtf8("lblHighCurve_2"));
        lblHighCurve_2->setMinimumSize(QSize(0, 80));
        lblHighCurve_2->setMaximumSize(QSize(10000, 10000));
        lblHighCurve_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblHighCurve_2->setAlignment(Qt::AlignCenter);

        verticalLayout_18->addWidget(lblHighCurve_2);

        lblLowCurve_2 = new QLabel(widget_20);
        lblLowCurve_2->setObjectName(QString::fromUtf8("lblLowCurve_2"));
        lblLowCurve_2->setMinimumSize(QSize(0, 80));
        lblLowCurve_2->setMaximumSize(QSize(10000, 10000));
        lblLowCurve_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblLowCurve_2->setAlignment(Qt::AlignCenter);

        verticalLayout_18->addWidget(lblLowCurve_2);


        verticalLayout_17->addWidget(widget_20);

        widget_21 = new QWidget(widget_16);
        widget_21->setObjectName(QString::fromUtf8("widget_21"));
        gridLayout_8 = new QGridLayout(widget_21);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setVerticalSpacing(0);
        lblFx0_2 = new QLabel(widget_21);
        lblFx0_2->setObjectName(QString::fromUtf8("lblFx0_2"));
        lblFx0_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx0_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFx0_2, 0, 0, 1, 1);

        lblFx1_2 = new QLabel(widget_21);
        lblFx1_2->setObjectName(QString::fromUtf8("lblFx1_2"));
        lblFx1_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx1_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFx1_2, 0, 1, 1, 1);

        lblFx2_2 = new QLabel(widget_21);
        lblFx2_2->setObjectName(QString::fromUtf8("lblFx2_2"));
        lblFx2_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx2_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFx2_2, 0, 2, 1, 1);

        lblFx3_2 = new QLabel(widget_21);
        lblFx3_2->setObjectName(QString::fromUtf8("lblFx3_2"));
        lblFx3_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx3_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFx3_2, 0, 3, 1, 1);

        lblFx4_2 = new QLabel(widget_21);
        lblFx4_2->setObjectName(QString::fromUtf8("lblFx4_2"));
        lblFx4_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx4_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFx4_2, 0, 4, 1, 1);

        lblFx5_2 = new QLabel(widget_21);
        lblFx5_2->setObjectName(QString::fromUtf8("lblFx5_2"));
        lblFx5_2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx5_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFx5_2, 0, 5, 1, 1);

        lblFl0_2 = new QLabel(widget_21);
        lblFl0_2->setObjectName(QString::fromUtf8("lblFl0_2"));
        lblFl0_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl0_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFl0_2, 1, 0, 1, 1);

        lblFl1_2 = new QLabel(widget_21);
        lblFl1_2->setObjectName(QString::fromUtf8("lblFl1_2"));
        lblFl1_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl1_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFl1_2, 1, 1, 1, 1);

        lblFl2_2 = new QLabel(widget_21);
        lblFl2_2->setObjectName(QString::fromUtf8("lblFl2_2"));
        lblFl2_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl2_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFl2_2, 1, 2, 1, 1);

        lblFl3_2 = new QLabel(widget_21);
        lblFl3_2->setObjectName(QString::fromUtf8("lblFl3_2"));
        lblFl3_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl3_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFl3_2, 1, 3, 1, 1);

        lblFl4_2 = new QLabel(widget_21);
        lblFl4_2->setObjectName(QString::fromUtf8("lblFl4_2"));
        lblFl4_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl4_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFl4_2, 1, 4, 1, 1);

        lblFl5_2 = new QLabel(widget_21);
        lblFl5_2->setObjectName(QString::fromUtf8("lblFl5_2"));
        lblFl5_2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl5_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblFl5_2, 1, 5, 1, 1);


        verticalLayout_17->addWidget(widget_21);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 45, 371, 401));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_12 = new QWidget(widget_2);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setStyleSheet(QString::fromUtf8("background-color: rgba(157, 133, 255, 0);\n"
"border-radius: 15px"));
        lblCity_2 = new QLabel(widget_12);
        lblCity_2->setObjectName(QString::fromUtf8("lblCity_2"));
        lblCity_2->setGeometry(QRect(190, 123, 161, 20));
        lblCity_2->setStyleSheet(QString::fromUtf8("font: 13pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(255, 255, 255,0);"));
        lblCity_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblCity_2->setWordWrap(true);
        lblSun = new QLabel(widget_12);
        lblSun->setObjectName(QString::fromUtf8("lblSun"));
        lblSun->setGeometry(QRect(280, 11, 61, 61));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblSun->sizePolicy().hasHeightForWidth());
        lblSun->setSizePolicy(sizePolicy);
        lblSun->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(255, 255, 255,0);"));
        lblSun->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(widget_12);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 0, 112, 104));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblTemp_2 = new QLabel(layoutWidget);
        lblTemp_2->setObjectName(QString::fromUtf8("lblTemp_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(45);
        font.setBold(false);
        font.setItalic(false);
        lblTemp_2->setFont(font);
        lblTemp_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 45pt \"Arial\";\n"
"background-color: rgba(0, 255, 255, 0);"));
        lblTemp_2->setScaledContents(true);
        lblTemp_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblTemp_2);

        lblLowHigh_2 = new QLabel(layoutWidget);
        lblLowHigh_2->setObjectName(QString::fromUtf8("lblLowHigh_2"));
        lblLowHigh_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblLowHigh_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblLowHigh_2);

        lbladdrIcon = new QLabel(widget_12);
        lbladdrIcon->setObjectName(QString::fromUtf8("lbladdrIcon"));
        lbladdrIcon->setGeometry(QRect(160, 123, 21, 21));
        lblSunText = new QLabel(widget_12);
        lblSunText->setObjectName(QString::fromUtf8("lblSunText"));
        lblSunText->setGeometry(QRect(280, 80, 61, 21));
        lblSunText->setAlignment(Qt::AlignCenter);
        widget1 = new QWidget(widget_12);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(31, 1, 112, 143));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblTypeIcon_2 = new QLabel(widget1);
        lblTypeIcon_2->setObjectName(QString::fromUtf8("lblTypeIcon_2"));
        lblTypeIcon_2->setMinimumSize(QSize(110, 110));
        lblTypeIcon_2->setMaximumSize(QSize(110, 110));
        lblTypeIcon_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblTypeIcon_2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.svg")));
        lblTypeIcon_2->setAlignment(Qt::AlignCenter);
        lblTypeIcon_2->setMargin(0);

        verticalLayout->addWidget(lblTypeIcon_2);

        lblType_2 = new QLabel(widget1);
        lblType_2->setObjectName(QString::fromUtf8("lblType_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblType_2->sizePolicy().hasHeightForWidth());
        lblType_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        lblType_2->setFont(font1);
        lblType_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblType_2->setScaledContents(true);
        lblType_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblType_2);


        verticalLayout_3->addWidget(widget_12);

        widget_14 = new QWidget(widget_2);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        verticalLayout_12 = new QVBoxLayout(widget_14);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        lblGanMao_2 = new QLabel(widget_14);
        lblGanMao_2->setObjectName(QString::fromUtf8("lblGanMao_2"));
        lblGanMao_2->setStyleSheet(QString::fromUtf8("background-color: rgba(60, 60, 60, 0);\n"
"padding-left: 5px;\n"
"padding-right: 5px;"));
        lblGanMao_2->setWordWrap(true);

        verticalLayout_12->addWidget(lblGanMao_2);

        widget_15 = new QWidget(widget_14);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setStyleSheet(QString::fromUtf8("background-color:  rgba(60, 60, 60, 100);\n"
"border-radius: 15px"));
        gridLayout_5 = new QGridLayout(widget_15);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(50);
        gridLayout_5->setVerticalSpacing(20);
        gridLayout_5->setContentsMargins(40, 25, 40, 25);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        lblWindIcon_2 = new QLabel(widget_15);
        lblWindIcon_2->setObjectName(QString::fromUtf8("lblWindIcon_2"));
        lblWindIcon_2->setMinimumSize(QSize(40, 40));
        lblWindIcon_2->setMaximumSize(QSize(40, 40));
        lblWindIcon_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblWindIcon_2->setPixmap(QPixmap(QString::fromUtf8(":/res/Wind.svg")));
        lblWindIcon_2->setScaledContents(true);
        lblWindIcon_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(lblWindIcon_2);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        lblWindFx_2 = new QLabel(widget_15);
        lblWindFx_2->setObjectName(QString::fromUtf8("lblWindFx_2"));
        lblWindFx_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblWindFx_2->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(lblWindFx_2);

        lblWindFl_2 = new QLabel(widget_15);
        lblWindFl_2->setObjectName(QString::fromUtf8("lblWindFl_2"));
        lblWindFl_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblWindFl_2->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(lblWindFl_2);


        horizontalLayout_16->addLayout(verticalLayout_13);


        gridLayout_5->addLayout(horizontalLayout_16, 0, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(0);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        lblPm25Icon_2 = new QLabel(widget_15);
        lblPm25Icon_2->setObjectName(QString::fromUtf8("lblPm25Icon_2"));
        lblPm25Icon_2->setMinimumSize(QSize(40, 40));
        lblPm25Icon_2->setMaximumSize(QSize(40, 40));
        lblPm25Icon_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblPm25Icon_2->setPixmap(QPixmap(QString::fromUtf8(":/res/PM25.svg")));
        lblPm25Icon_2->setScaledContents(true);
        lblPm25Icon_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(lblPm25Icon_2);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        lblPM25Title_2 = new QLabel(widget_15);
        lblPM25Title_2->setObjectName(QString::fromUtf8("lblPM25Title_2"));
        lblPM25Title_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblPM25Title_2->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(lblPM25Title_2);

        lblPM25_2 = new QLabel(widget_15);
        lblPM25_2->setObjectName(QString::fromUtf8("lblPM25_2"));
        lblPM25_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblPM25_2->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(lblPM25_2);


        horizontalLayout_17->addLayout(verticalLayout_14);


        gridLayout_5->addLayout(horizontalLayout_17, 0, 1, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(0);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        lblShiDuIcon_2 = new QLabel(widget_15);
        lblShiDuIcon_2->setObjectName(QString::fromUtf8("lblShiDuIcon_2"));
        lblShiDuIcon_2->setMinimumSize(QSize(40, 40));
        lblShiDuIcon_2->setMaximumSize(QSize(40, 40));
        lblShiDuIcon_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblShiDuIcon_2->setPixmap(QPixmap(QString::fromUtf8(":/res/ShiDu.svg")));
        lblShiDuIcon_2->setScaledContents(true);
        lblShiDuIcon_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(lblShiDuIcon_2);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        lblShiDuTitle_2 = new QLabel(widget_15);
        lblShiDuTitle_2->setObjectName(QString::fromUtf8("lblShiDuTitle_2"));
        lblShiDuTitle_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblShiDuTitle_2->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lblShiDuTitle_2);

        lblShiDu_2 = new QLabel(widget_15);
        lblShiDu_2->setObjectName(QString::fromUtf8("lblShiDu_2"));
        lblShiDu_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblShiDu_2->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lblShiDu_2);


        horizontalLayout_18->addLayout(verticalLayout_15);


        gridLayout_5->addLayout(horizontalLayout_18, 1, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(0);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        lblQualityIcon_2 = new QLabel(widget_15);
        lblQualityIcon_2->setObjectName(QString::fromUtf8("lblQualityIcon_2"));
        lblQualityIcon_2->setMinimumSize(QSize(40, 40));
        lblQualityIcon_2->setMaximumSize(QSize(40, 40));
        lblQualityIcon_2->setAutoFillBackground(false);
        lblQualityIcon_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblQualityIcon_2->setPixmap(QPixmap(QString::fromUtf8(":/res/KongQiAQI.svg")));
        lblQualityIcon_2->setScaledContents(true);
        lblQualityIcon_2->setAlignment(Qt::AlignCenter);
        lblQualityIcon_2->setWordWrap(false);
        lblQualityIcon_2->setIndent(-1);

        horizontalLayout_19->addWidget(lblQualityIcon_2);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        lblQualityTitle_2 = new QLabel(widget_15);
        lblQualityTitle_2->setObjectName(QString::fromUtf8("lblQualityTitle_2"));
        lblQualityTitle_2->setAutoFillBackground(false);
        lblQualityTitle_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblQualityTitle_2->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(lblQualityTitle_2);

        lblQuality_2 = new QLabel(widget_15);
        lblQuality_2->setObjectName(QString::fromUtf8("lblQuality_2"));
        lblQuality_2->setAutoFillBackground(false);
        lblQuality_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblQuality_2->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(lblQuality_2);


        horizontalLayout_19->addLayout(verticalLayout_16);


        gridLayout_5->addLayout(horizontalLayout_19, 1, 1, 1, 1);


        verticalLayout_12->addWidget(widget_15);


        verticalLayout_3->addWidget(widget_14);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        leCity_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\237\216\345\270\202", nullptr));
        btnSearch_2->setText(QString());
        lblDate_2->setText(QCoreApplication::translate("MainWindow", "2023/12/20 \346\230\237\346\234\237\345\205\255", nullptr));
        lblWeek0_2->setText(QCoreApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        lblWeek1_2->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        lblWeek2_2->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        lblWeek3_2->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\233\233", nullptr));
        lblWeek4_2->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\272\224", nullptr));
        lblWeek5_2->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\205\255", nullptr));
        lblDate0_2->setText(QCoreApplication::translate("MainWindow", "12/22", nullptr));
        lblDate1_2->setText(QCoreApplication::translate("MainWindow", "12/23", nullptr));
        lblDate2_2->setText(QCoreApplication::translate("MainWindow", "12/24", nullptr));
        lblDate3_2->setText(QCoreApplication::translate("MainWindow", "12/25", nullptr));
        lblDate4_2->setText(QCoreApplication::translate("MainWindow", "12/26", nullptr));
        lblDate5_2->setText(QCoreApplication::translate("MainWindow", "12/27", nullptr));
        lblTypeIcon3_2->setText(QString());
        lblTypeIcon0_2->setText(QString());
        lblTypeIcon2_2->setText(QString());
        lblType0_2->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        lblType3_2->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblTypeIcon5_2->setText(QString());
        lblType5_2->setText(QCoreApplication::translate("MainWindow", "\346\232\264\351\233\250", nullptr));
        lblType4_2->setText(QCoreApplication::translate("MainWindow", "\344\270\255\351\233\250", nullptr));
        lblTypeIcon1_2->setText(QString());
        lblType2_2->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblTypeIcon4_2->setText(QString());
        lblType1_2->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        lblQuality0_2->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        lblQuality1_2->setText(QCoreApplication::translate("MainWindow", "\350\211\257", nullptr));
        lblQuality2_2->setText(QCoreApplication::translate("MainWindow", "\350\275\273\345\272\246", nullptr));
        lblQuality3_2->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\272\246", nullptr));
        lblQuality4_2->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\272\246", nullptr));
        lblQuality5_2->setText(QCoreApplication::translate("MainWindow", "\344\270\245\351\207\215", nullptr));
        lblHighCurve_2->setText(QString());
        lblLowCurve_2->setText(QString());
        lblFx0_2->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lblFx1_2->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\214\227\351\243\216", nullptr));
        lblFx2_2->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFx3_2->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFx4_2->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        lblFx5_2->setText(QCoreApplication::translate("MainWindow", "\350\245\277\351\243\216", nullptr));
        lblFl0_2->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl1_2->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lblFl2_2->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl3_2->setText(QCoreApplication::translate("MainWindow", "1\347\272\247", nullptr));
        lblFl4_2->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl5_2->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblCity_2->setText(QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254\345\270\202", nullptr));
        lblSun->setText(QString());
        lblTemp_2->setText(QCoreApplication::translate("MainWindow", "-32\302\260", nullptr));
        lblLowHigh_2->setText(QCoreApplication::translate("MainWindow", "19\302\260~31\302\260", nullptr));
        lbladdrIcon->setText(QString());
        lblSunText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\346\227\245\345\207\272</span></p></body></html>", nullptr));
        lblTypeIcon_2->setText(QString());
        lblType_2->setText(QCoreApplication::translate("MainWindow", "\346\231\264\350\275\254\345\244\232\344\272\221", nullptr));
        lblGanMao_2->setText(QCoreApplication::translate("MainWindow", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\204\277\347\253\245\343\200\201\350\200\201\345\271\264\344\272\272\345\217\212\345\277\203\350\204\217\343\200\201\345\221\274\345\220\270\347\263\273\347\273\237\347\226\276\347\227\205\346\202\243\350\200\205\344\272\272\347\276\244\345\272\224\345\207\217\345\260\221\351\225\277\346\227\266\351\227\264\346\210\226\351\253\230\345\274\272\345\272\246\346\210\267\345\244\226\351\224\273\347\202\274", nullptr));
        lblWindIcon_2->setText(QString());
        lblWindFx_2->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblWindFl_2->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lblPm25Icon_2->setText(QString());
        lblPM25Title_2->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        lblPM25_2->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        lblShiDuIcon_2->setText(QString());
        lblShiDuTitle_2->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        lblShiDu_2->setText(QCoreApplication::translate("MainWindow", "60%", nullptr));
        lblQualityIcon_2->setText(QString());
        lblQualityTitle_2->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        lblQuality_2->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
