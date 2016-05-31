/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainwindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextBrowser *troopAPosition;
    QTextBrowser *troopAState;
    QTextBrowser *troopAProperty1;
    QTextBrowser *troopAProperty2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLCDNumber *troopAHeadCoordinateX;
    QLCDNumber *troopAHeadCoordinateY;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_3;
    QTextBrowser *gameMessageBrowser;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *endButton;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pauseButton;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QTextBrowser *troopBProperty1;
    QTextBrowser *troopBProperty2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLCDNumber *troopBHeadCoordinateX;
    QLCDNumber *troopBHeadCoordinateY;
    QTextBrowser *troopBState;
    QTextBrowser *troopBPosition;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLCDNumber *gameTimeLcdMin;
    QLabel *label;
    QLCDNumber *gameTimeLcdSec;
    QPushButton *musicButton;
    QPushButton *minisizeButton;
    QPushButton *cornerCloseButton;
    QLabel *outImage1;
    QLabel *outImage2;
    QLabel *outImage3;
    QLabel *outImage4;
    QLabel *propertyLabel1;
    QLabel *propertyLabel2;
    QLabel *propertyLabel3;
    QLabel *propertyLabel4;
    QLabel *imageLable;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QComboBox *troopAComboBox;
    QLabel *color1;
    QComboBox *troopBComboBox;
    QLabel *color2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QLCDNumber *property1CoordationX;
    QLCDNumber *property2CoordationX;
    QLCDNumber *property2CoordationY;
    QSpacerItem *horizontalSpacer_5;
    QLCDNumber *property3CoordationX;
    QSpacerItem *horizontalSpacer_6;
    QTextBrowser *propertyShow4;
    QSpacerItem *horizontalSpacer_9;
    QLCDNumber *property4CoordationX;
    QSpacerItem *horizontalSpacer_8;
    QTextBrowser *propertyShow3;
    QSpacerItem *horizontalSpacer_4;
    QLCDNumber *property3CoordationY;
    QLCDNumber *property1CoordationY;
    QTextBrowser *propertyShow2;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_7;
    QLCDNumber *property4CoordationY;
    QTextBrowser *propertyShow1;
    QLabel *pit1;
    QLabel *pit2;
    QLabel *pit3;
    QLabel *pit4;
    QLabel *imageLableMask;
    QLabel *imagePauseLable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Mainwindow)
    {
        if (Mainwindow->objectName().isEmpty())
            Mainwindow->setObjectName(QStringLiteral("Mainwindow"));
        Mainwindow->resize(1041, 635);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Mainwindow->sizePolicy().hasHeightForWidth());
        Mainwindow->setSizePolicy(sizePolicy);
        Mainwindow->setMinimumSize(QSize(1000, 630));
        Mainwindow->setMaximumSize(QSize(1200, 700));
        Mainwindow->setBaseSize(QSize(7, 0));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("\347\254\254\345\215\201\344\270\203\345\261\212\347\224\265\345\255\220\350\256\276\350\256\241\345\244\247\350\265\233");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("D:/THEDC17/THEDC17/image/pause.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        }
        Mainwindow->setWindowIcon(icon);
        Mainwindow->setAutoFillBackground(false);
        Mainwindow->setStyleSheet(QStringLiteral(""));
        Mainwindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(Mainwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(620, 70, 201, 161));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QLatin1String("border-width:1px;   \n"
"border-style:solid;\n"
"border-color: rgb(255,255,255);   \n"
"color: rgb(255, 255, 255);"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        troopAPosition = new QTextBrowser(groupBox_2);
        troopAPosition->setObjectName(QStringLiteral("troopAPosition"));
        troopAPosition->setFont(font);
        troopAPosition->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(troopAPosition, 0, 0, 1, 2);

        troopAState = new QTextBrowser(groupBox_2);
        troopAState->setObjectName(QStringLiteral("troopAState"));
        troopAState->setFont(font);
        troopAState->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(troopAState, 1, 0, 1, 2);

        troopAProperty1 = new QTextBrowser(groupBox_2);
        troopAProperty1->setObjectName(QStringLiteral("troopAProperty1"));
        troopAProperty1->setFont(font);
        troopAProperty1->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(troopAProperty1, 2, 0, 1, 1);

        troopAProperty2 = new QTextBrowser(groupBox_2);
        troopAProperty2->setObjectName(QStringLiteral("troopAProperty2"));
        troopAProperty2->setFont(font);
        troopAProperty2->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(troopAProperty2, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_5);

        troopAHeadCoordinateX = new QLCDNumber(groupBox_2);
        troopAHeadCoordinateX->setObjectName(QStringLiteral("troopAHeadCoordinateX"));
        troopAHeadCoordinateX->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        troopAHeadCoordinateX->setSmallDecimalPoint(true);
        troopAHeadCoordinateX->setDigitCount(3);
        troopAHeadCoordinateX->setSegmentStyle(QLCDNumber::Flat);
        troopAHeadCoordinateX->setProperty("intValue", QVariant(0));

        horizontalLayout_3->addWidget(troopAHeadCoordinateX);

        troopAHeadCoordinateY = new QLCDNumber(groupBox_2);
        troopAHeadCoordinateY->setObjectName(QStringLiteral("troopAHeadCoordinateY"));
        troopAHeadCoordinateY->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        troopAHeadCoordinateY->setSmallDecimalPoint(true);
        troopAHeadCoordinateY->setDigitCount(3);
        troopAHeadCoordinateY->setSegmentStyle(QLCDNumber::Flat);
        troopAHeadCoordinateY->setProperty("intValue", QVariant(0));

        horizontalLayout_3->addWidget(troopAHeadCoordinateY);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(620, 430, 411, 181));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox_6->setFont(font1);
        groupBox_6->setStyleSheet(QLatin1String("border-width:1px;   \n"
"border-style:solid;\n"
"border-color: rgb(255,255,255);   \n"
"color:rgb(255,255,255);"));
        gridLayout_3 = new QGridLayout(groupBox_6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gameMessageBrowser = new QTextBrowser(groupBox_6);
        gameMessageBrowser->setObjectName(QStringLiteral("gameMessageBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gameMessageBrowser->sizePolicy().hasHeightForWidth());
        gameMessageBrowser->setSizePolicy(sizePolicy1);
        gameMessageBrowser->setMinimumSize(QSize(0, 120));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        gameMessageBrowser->setFont(font2);
        gameMessageBrowser->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(gameMessageBrowser, 0, 0, 1, 1);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(620, 350, 411, 32));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(layoutWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy2);
        startButton->setMinimumSize(QSize(120, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("Aharoni"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        startButton->setFont(font3);
        startButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(38, 38, 38); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(111, 111, 83); }"));
        startButton->setIconSize(QSize(0, 0));

        horizontalLayout_6->addWidget(startButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        endButton = new QPushButton(layoutWidget);
        endButton->setObjectName(QStringLiteral("endButton"));
        sizePolicy2.setHeightForWidth(endButton->sizePolicy().hasHeightForWidth());
        endButton->setSizePolicy(sizePolicy2);
        endButton->setMinimumSize(QSize(120, 30));
        endButton->setFont(font3);
        endButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(38, 38, 38); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(111, 111, 83); }"));

        horizontalLayout_6->addWidget(endButton);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        pauseButton = new QPushButton(layoutWidget);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setMinimumSize(QSize(120, 30));
        pauseButton->setFont(font3);
        pauseButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(38, 38, 38); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(111, 111, 83); }"));

        horizontalLayout_6->addWidget(pauseButton);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(840, 70, 191, 161));
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QLatin1String("border-width:1px;   \n"
"border-style:solid;\n"
"border-color: rgb(255,255,255);   \n"
"color: rgb(255, 255, 255);"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        troopBProperty1 = new QTextBrowser(groupBox_3);
        troopBProperty1->setObjectName(QStringLiteral("troopBProperty1"));
        troopBProperty1->setFont(font);
        troopBProperty1->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(troopBProperty1, 2, 0, 1, 1);

        troopBProperty2 = new QTextBrowser(groupBox_3);
        troopBProperty2->setObjectName(QStringLiteral("troopBProperty2"));
        troopBProperty2->setFont(font);
        troopBProperty2->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(troopBProperty2, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_6);

        troopBHeadCoordinateX = new QLCDNumber(groupBox_3);
        troopBHeadCoordinateX->setObjectName(QStringLiteral("troopBHeadCoordinateX"));
        troopBHeadCoordinateX->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        troopBHeadCoordinateX->setSmallDecimalPoint(true);
        troopBHeadCoordinateX->setDigitCount(3);
        troopBHeadCoordinateX->setSegmentStyle(QLCDNumber::Flat);
        troopBHeadCoordinateX->setProperty("intValue", QVariant(0));

        horizontalLayout_4->addWidget(troopBHeadCoordinateX);

        troopBHeadCoordinateY = new QLCDNumber(groupBox_3);
        troopBHeadCoordinateY->setObjectName(QStringLiteral("troopBHeadCoordinateY"));
        troopBHeadCoordinateY->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        troopBHeadCoordinateY->setSmallDecimalPoint(true);
        troopBHeadCoordinateY->setDigitCount(3);
        troopBHeadCoordinateY->setSegmentStyle(QLCDNumber::Flat);
        troopBHeadCoordinateY->setProperty("intValue", QVariant(0));

        horizontalLayout_4->addWidget(troopBHeadCoordinateY);


        gridLayout_4->addLayout(horizontalLayout_4, 3, 0, 1, 2);

        troopBState = new QTextBrowser(groupBox_3);
        troopBState->setObjectName(QStringLiteral("troopBState"));
        troopBState->setFont(font);
        troopBState->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(troopBState, 1, 0, 1, 2);

        troopBPosition = new QTextBrowser(groupBox_3);
        troopBPosition->setObjectName(QStringLiteral("troopBPosition"));
        troopBPosition->setFont(font);
        troopBPosition->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(troopBPosition, 0, 0, 1, 2);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(630, 10, 292, 44));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font4;
        font4.setFamily(QStringLiteral("Aharoni"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        label_4->setFont(font4);
        label_4->setStyleSheet(QLatin1String("border-width:2px;   \n"
"border-style:transparent;\n"
"color: rgb(255,255,255);  "));

        horizontalLayout_2->addWidget(label_4);

        gameTimeLcdMin = new QLCDNumber(layoutWidget1);
        gameTimeLcdMin->setObjectName(QStringLiteral("gameTimeLcdMin"));
        gameTimeLcdMin->setStyleSheet(QLatin1String("border-width:2px;   \n"
"border-style:transparent;\n"
"color: rgb(255,255,255);    "));
        gameTimeLcdMin->setFrameShadow(QFrame::Raised);
        gameTimeLcdMin->setLineWidth(1);
        gameTimeLcdMin->setDigitCount(2);
        gameTimeLcdMin->setMode(QLCDNumber::Dec);
        gameTimeLcdMin->setSegmentStyle(QLCDNumber::Filled);
        gameTimeLcdMin->setProperty("value", QVariant(0));
        gameTimeLcdMin->setProperty("intValue", QVariant(0));

        horizontalLayout_2->addWidget(gameTimeLcdMin);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setMinimumSize(QSize(20, 0));
        QFont font5;
        font5.setFamily(QStringLiteral("Aharoni"));
        font5.setPointSize(26);
        font5.setBold(true);
        font5.setWeight(75);
        label->setFont(font5);
        label->setStyleSheet(QLatin1String("\n"
"color: rgb(255,255,255);  "));

        horizontalLayout_2->addWidget(label);

        gameTimeLcdSec = new QLCDNumber(layoutWidget1);
        gameTimeLcdSec->setObjectName(QStringLiteral("gameTimeLcdSec"));
        gameTimeLcdSec->setStyleSheet(QLatin1String("border-width:2px;   \n"
"border-style:transparent;\n"
"color: rgb(255,255,255);  "));
        gameTimeLcdSec->setSmallDecimalPoint(false);
        gameTimeLcdSec->setDigitCount(2);
        gameTimeLcdSec->setSegmentStyle(QLCDNumber::Filled);

        horizontalLayout_2->addWidget(gameTimeLcdSec);

        musicButton = new QPushButton(centralwidget);
        musicButton->setObjectName(QStringLiteral("musicButton"));
        musicButton->setGeometry(QRect(940, 20, 21, 21));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(musicButton->sizePolicy().hasHeightForWidth());
        musicButton->setSizePolicy(sizePolicy4);
        musicButton->setStyleSheet(QStringLiteral("QPushButton:hover { background-color: rgb(52, 200, 144); }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/image/music1.png"), QSize(), QIcon::Normal, QIcon::Off);
        musicButton->setIcon(icon1);
        musicButton->setIconSize(QSize(21, 21));
        minisizeButton = new QPushButton(centralwidget);
        minisizeButton->setObjectName(QStringLiteral("minisizeButton"));
        minisizeButton->setGeometry(QRect(970, 20, 21, 23));
        sizePolicy4.setHeightForWidth(minisizeButton->sizePolicy().hasHeightForWidth());
        minisizeButton->setSizePolicy(sizePolicy4);
        minisizeButton->setStyleSheet(QStringLiteral("QPushButton:hover { background-color: rgb(0,0,0); }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/image/minisize (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        minisizeButton->setIcon(icon2);
        minisizeButton->setIconSize(QSize(21, 21));
        cornerCloseButton = new QPushButton(centralwidget);
        cornerCloseButton->setObjectName(QStringLiteral("cornerCloseButton"));
        cornerCloseButton->setGeometry(QRect(1000, 20, 21, 23));
        sizePolicy4.setHeightForWidth(cornerCloseButton->sizePolicy().hasHeightForWidth());
        cornerCloseButton->setSizePolicy(sizePolicy4);
        cornerCloseButton->setStyleSheet(QStringLiteral("QPushButton:hover { background-color: rgb(0,0,0); }"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        cornerCloseButton->setIcon(icon3);
        cornerCloseButton->setIconSize(QSize(21, 21));
        outImage1 = new QLabel(centralwidget);
        outImage1->setObjectName(QStringLiteral("outImage1"));
        outImage1->setGeometry(QRect(190, 190, 31, 31));
        outImage1->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/out.jpg")));
        outImage1->setScaledContents(true);
        outImage2 = new QLabel(centralwidget);
        outImage2->setObjectName(QStringLiteral("outImage2"));
        outImage2->setGeometry(QRect(240, 190, 31, 31));
        outImage2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/out.jpg")));
        outImage2->setScaledContents(true);
        outImage3 = new QLabel(centralwidget);
        outImage3->setObjectName(QStringLiteral("outImage3"));
        outImage3->setGeometry(QRect(280, 190, 31, 31));
        outImage3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/out.jpg")));
        outImage3->setScaledContents(true);
        outImage4 = new QLabel(centralwidget);
        outImage4->setObjectName(QStringLiteral("outImage4"));
        outImage4->setGeometry(QRect(330, 190, 31, 31));
        outImage4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/out.jpg")));
        outImage4->setScaledContents(true);
        propertyLabel1 = new QLabel(centralwidget);
        propertyLabel1->setObjectName(QStringLiteral("propertyLabel1"));
        propertyLabel1->setGeometry(QRect(180, 240, 41, 41));
        propertyLabel1->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/property.png")));
        propertyLabel1->setScaledContents(true);
        propertyLabel2 = new QLabel(centralwidget);
        propertyLabel2->setObjectName(QStringLiteral("propertyLabel2"));
        propertyLabel2->setGeometry(QRect(230, 240, 41, 41));
        propertyLabel2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/property.png")));
        propertyLabel2->setScaledContents(true);
        propertyLabel3 = new QLabel(centralwidget);
        propertyLabel3->setObjectName(QStringLiteral("propertyLabel3"));
        propertyLabel3->setGeometry(QRect(280, 240, 41, 41));
        propertyLabel3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/property.png")));
        propertyLabel3->setScaledContents(true);
        propertyLabel4 = new QLabel(centralwidget);
        propertyLabel4->setObjectName(QStringLiteral("propertyLabel4"));
        propertyLabel4->setGeometry(QRect(330, 240, 41, 41));
        propertyLabel4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/property.png")));
        propertyLabel4->setScaledContents(true);
        imageLable = new QLabel(centralwidget);
        imageLable->setObjectName(QStringLiteral("imageLable"));
        imageLable->setGeometry(QRect(10, 10, 601, 601));
        sizePolicy2.setHeightForWidth(imageLable->sizePolicy().hasHeightForWidth());
        imageLable->setSizePolicy(sizePolicy2);
        imageLable->setStyleSheet(QLatin1String("border-width:2px;   \n"
"border-style:solid;\n"
"border-color: rgb(91, 45, 0);"));
        imageLable->setFrameShadow(QFrame::Plain);
        imageLable->setPixmap(QPixmap(QString::fromUtf8("D:/THEDC17/THEDC17/image/pause.jpg")));
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(620, 390, 411, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        troopAComboBox = new QComboBox(layoutWidget2);
        troopAComboBox->setObjectName(QStringLiteral("troopAComboBox"));
        sizePolicy1.setHeightForWidth(troopAComboBox->sizePolicy().hasHeightForWidth());
        troopAComboBox->setSizePolicy(sizePolicy1);
        troopAComboBox->setMaximumSize(QSize(16777215, 25));
        QFont font6;
        font6.setFamily(QStringLiteral("Aharoni"));
        font6.setPointSize(11);
        font6.setBold(true);
        font6.setWeight(75);
        troopAComboBox->setFont(font6);
        troopAComboBox->setStyleSheet(QLatin1String("background-color: rgb(91, 45, 0);\n"
"border-radius: 9px; color: rgb(255, 255, 255); "));

        horizontalLayout->addWidget(troopAComboBox);

        color1 = new QLabel(layoutWidget2);
        color1->setObjectName(QStringLiteral("color1"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(color1->sizePolicy().hasHeightForWidth());
        color1->setSizePolicy(sizePolicy5);
        color1->setMaximumSize(QSize(20, 30));

        horizontalLayout->addWidget(color1);

        troopBComboBox = new QComboBox(layoutWidget2);
        troopBComboBox->setObjectName(QStringLiteral("troopBComboBox"));
        sizePolicy1.setHeightForWidth(troopBComboBox->sizePolicy().hasHeightForWidth());
        troopBComboBox->setSizePolicy(sizePolicy1);
        troopBComboBox->setMinimumSize(QSize(0, 0));
        troopBComboBox->setMaximumSize(QSize(16777215, 25));
        troopBComboBox->setFont(font6);
        troopBComboBox->setStyleSheet(QLatin1String("background-color: rgb(91, 45, 0);\n"
"border-radius: 9px; color: rgb(255, 255, 255); "));

        horizontalLayout->addWidget(troopBComboBox);

        color2 = new QLabel(layoutWidget2);
        color2->setObjectName(QStringLiteral("color2"));
        sizePolicy5.setHeightForWidth(color2->sizePolicy().hasHeightForWidth());
        color2->setSizePolicy(sizePolicy5);
        color2->setMaximumSize(QSize(20, 30));

        horizontalLayout->addWidget(color2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(620, 240, 411, 101));
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QLatin1String("border-width:1px;   \n"
"border-style:solid;\n"
"border-color: rgb(255,255,255);   \n"
"color:rgb(255,255,255);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        property1CoordationX = new QLCDNumber(groupBox);
        property1CoordationX->setObjectName(QStringLiteral("property1CoordationX"));
        property1CoordationX->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        property1CoordationX->setSmallDecimalPoint(false);
        property1CoordationX->setDigitCount(3);
        property1CoordationX->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(property1CoordationX, 0, 2, 1, 1);

        property2CoordationX = new QLCDNumber(groupBox);
        property2CoordationX->setObjectName(QStringLiteral("property2CoordationX"));
        property2CoordationX->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        property2CoordationX->setDigitCount(3);
        property2CoordationX->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(property2CoordationX, 0, 7, 1, 1);

        property2CoordationY = new QLCDNumber(groupBox);
        property2CoordationY->setObjectName(QStringLiteral("property2CoordationY"));
        property2CoordationY->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        property2CoordationY->setDigitCount(3);
        property2CoordationY->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(property2CoordationY, 0, 9, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 1, 1, 1);

        property3CoordationX = new QLCDNumber(groupBox);
        property3CoordationX->setObjectName(QStringLiteral("property3CoordationX"));
        property3CoordationX->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        property3CoordationX->setDigitCount(3);
        property3CoordationX->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(property3CoordationX, 1, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 3, 1, 1);

        propertyShow4 = new QTextBrowser(groupBox);
        propertyShow4->setObjectName(QStringLiteral("propertyShow4"));
        propertyShow4->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(propertyShow4, 1, 5, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 1, 6, 1, 1);

        property4CoordationX = new QLCDNumber(groupBox);
        property4CoordationX->setObjectName(QStringLiteral("property4CoordationX"));
        property4CoordationX->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        property4CoordationX->setDigitCount(3);
        property4CoordationX->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(property4CoordationX, 1, 7, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 6, 1, 1);

        propertyShow3 = new QTextBrowser(groupBox);
        propertyShow3->setObjectName(QStringLiteral("propertyShow3"));
        propertyShow3->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(propertyShow3, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        property3CoordationY = new QLCDNumber(groupBox);
        property3CoordationY->setObjectName(QStringLiteral("property3CoordationY"));
        property3CoordationY->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        property3CoordationY->setDigitCount(3);
        property3CoordationY->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(property3CoordationY, 1, 4, 1, 1);

        property1CoordationY = new QLCDNumber(groupBox);
        property1CoordationY->setObjectName(QStringLiteral("property1CoordationY"));
        property1CoordationY->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        property1CoordationY->setDigitCount(3);
        property1CoordationY->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(property1CoordationY, 0, 4, 1, 1);

        propertyShow2 = new QTextBrowser(groupBox);
        propertyShow2->setObjectName(QStringLiteral("propertyShow2"));
        sizePolicy1.setHeightForWidth(propertyShow2->sizePolicy().hasHeightForWidth());
        propertyShow2->setSizePolicy(sizePolicy1);
        propertyShow2->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(propertyShow2, 0, 5, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 1, 8, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 8, 1, 1);

        property4CoordationY = new QLCDNumber(groupBox);
        property4CoordationY->setObjectName(QStringLiteral("property4CoordationY"));
        property4CoordationY->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));
        property4CoordationY->setDigitCount(3);
        property4CoordationY->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(property4CoordationY, 1, 9, 1, 1);

        propertyShow1 = new QTextBrowser(groupBox);
        propertyShow1->setObjectName(QStringLiteral("propertyShow1"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(propertyShow1->sizePolicy().hasHeightForWidth());
        propertyShow1->setSizePolicy(sizePolicy6);
        propertyShow1->setStyleSheet(QLatin1String("border-radius:6px;\n"
"background-color: rgb(50, 50, 50, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(propertyShow1, 0, 0, 1, 1);

        pit1 = new QLabel(centralwidget);
        pit1->setObjectName(QStringLiteral("pit1"));
        pit1->setGeometry(QRect(180, 140, 41, 41));
        pit1->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/pit.png")));
        pit1->setScaledContents(true);
        pit2 = new QLabel(centralwidget);
        pit2->setObjectName(QStringLiteral("pit2"));
        pit2->setGeometry(QRect(230, 140, 41, 41));
        pit2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/pit.png")));
        pit2->setScaledContents(true);
        pit3 = new QLabel(centralwidget);
        pit3->setObjectName(QStringLiteral("pit3"));
        pit3->setGeometry(QRect(280, 140, 41, 41));
        pit3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/pit.png")));
        pit3->setScaledContents(true);
        pit4 = new QLabel(centralwidget);
        pit4->setObjectName(QStringLiteral("pit4"));
        pit4->setGeometry(QRect(330, 140, 41, 41));
        pit4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/pit.png")));
        pit4->setScaledContents(true);
        imageLableMask = new QLabel(centralwidget);
        imageLableMask->setObjectName(QStringLiteral("imageLableMask"));
        imageLableMask->setGeometry(QRect(10, 10, 601, 591));
        sizePolicy2.setHeightForWidth(imageLableMask->sizePolicy().hasHeightForWidth());
        imageLableMask->setSizePolicy(sizePolicy2);
        imageLableMask->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255, 50);"));
        imagePauseLable = new QLabel(centralwidget);
        imagePauseLable->setObjectName(QStringLiteral("imagePauseLable"));
        imagePauseLable->setGeometry(QRect(10, 10, 601, 601));
        sizePolicy2.setHeightForWidth(imagePauseLable->sizePolicy().hasHeightForWidth());
        imagePauseLable->setSizePolicy(sizePolicy2);
        imagePauseLable->setStyleSheet(QLatin1String("border-width:2px;   \n"
"border-style:solid;\n"
"border-color: rgb(91, 45, 0);"));
        imagePauseLable->setFrameShadow(QFrame::Plain);
        imagePauseLable->setPixmap(QPixmap(QString::fromUtf8("image/pause.jpg")));
        Mainwindow->setCentralWidget(centralwidget);
        imageLable->raise();
        imageLableMask->raise();
        groupBox_2->raise();
        groupBox_6->raise();
        layoutWidget->raise();
        groupBox_3->raise();
        layoutWidget->raise();
        musicButton->raise();
        minisizeButton->raise();
        cornerCloseButton->raise();
        layoutWidget->raise();
        groupBox->raise();
        propertyLabel3->raise();
        outImage2->raise();
        outImage4->raise();
        propertyLabel4->raise();
        outImage1->raise();
        propertyLabel2->raise();
        outImage3->raise();
        propertyLabel1->raise();
        pit1->raise();
        pit2->raise();
        pit3->raise();
        pit4->raise();
        imagePauseLable->raise();
        menubar = new QMenuBar(Mainwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1041, 21));
        Mainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(Mainwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Mainwindow->setStatusBar(statusbar);

        retranslateUi(Mainwindow);

        QMetaObject::connectSlotsByName(Mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *Mainwindow)
    {
        Mainwindow->setWindowTitle(QApplication::translate("Mainwindow", "MainWindow", 0));
        groupBox_2->setTitle(QString());
        label_5->setText(QApplication::translate("Mainwindow", "Position", 0));
        groupBox_6->setTitle(QString());
        startButton->setText(QApplication::translate("Mainwindow", "Start", 0));
        endButton->setText(QApplication::translate("Mainwindow", "Finish", 0));
        pauseButton->setText(QApplication::translate("Mainwindow", "Pause", 0));
        groupBox_3->setTitle(QString());
        label_6->setText(QApplication::translate("Mainwindow", "Position", 0));
        label_4->setText(QApplication::translate("Mainwindow", "GAME TIME", 0));
        label->setText(QApplication::translate("Mainwindow", ":", 0));
        musicButton->setText(QString());
        minisizeButton->setText(QString());
        cornerCloseButton->setText(QString());
        outImage1->setText(QString());
        outImage2->setText(QString());
        outImage3->setText(QString());
        outImage4->setText(QString());
        propertyLabel1->setText(QString());
        propertyLabel2->setText(QString());
        propertyLabel3->setText(QString());
        propertyLabel4->setText(QString());
        imageLable->setText(QString());
        troopAComboBox->clear();
        troopAComboBox->insertItems(0, QStringList()
         << QApplication::translate("Mainwindow", "cowpool", 0)
         << QApplication::translate("Mainwindow", "\342\212\231\342\226\275\342\212\231\350\277\231\344\270\252\350\241\250\346\203\205\345\245\275\351\255\224\346\200\247\342\212\231\342\226\275\342\212\231", 0)
         << QApplication::translate("Mainwindow", "\351\234\207\345\212\250\347\232\204\345\260\217\350\275\246", 0)
         << QApplication::translate("Mainwindow", "\347\263\273\347\273\237\345\207\275\346\225\260\344\270\215\350\203\275\351\232\217\344\276\277\350\260\203\347\224\250", 0)
         << QApplication::translate("Mainwindow", "\350\200\201\345\217\270\345\237\272\345\270\246\350\267\257\345\260\261\351\227\256\344\275\240\344\273\254\346\200\225\344\270\215\346\200\225", 0)
         << QApplication::translate("Mainwindow", "Sample", 0)
         << QApplication::translate("Mainwindow", "\344\273\212\345\271\264\350\277\230\350\246\201\350\207\252\345\212\233\346\233\264\347\224\237~", 0)
         << QApplication::translate("Mainwindow", "\344\272\214\345\215\201\344\272\224\345\217\267\357\274\210@\342\226\224\342\200\224\342\226\224@\357\274\211", 0)
         << QApplication::translate("Mainwindow", "\351\230\237\345\220\215\345\276\210\351\225\277\345\276\210\351\225\277\345\276\210\351\225\277\344\271\237\344\274\232\351\205\261\346\262\271\351\230\237", 0)
         << QApplication::translate("Mainwindow", "\345\210\253\351\200\274\346\210\221\345\220\246\345\210\231\344\275\240\345\260\206\345\244\261\345\216\273\344\275\240\347\232\204\347\210\270\347\210\270", 0)
         << QApplication::translate("Mainwindow", "\350\267\221\350\267\221\345\215\241\344\270\201\350\275\246", 0)
         << QApplication::translate("Mainwindow", "\350\210\222\351\251\254\350\265\253", 0)
         << QApplication::translate("Mainwindow", "\345\206\215\346\222\236\346\210\221\346\210\221\345\260\261\350\246\201\346\212\245\350\255\246\345\225\246", 0)
         << QApplication::translate("Mainwindow", "NewBie", 0)
         << QApplication::translate("Mainwindow", "\345\220\215\346\202\254\344\272\214\347\272\277\357\274\210\342\212\231\317\211\342\212\231\357\274\211", 0)
         << QApplication::translate("Mainwindow", "\346\230\237\351\231\205\351\243\231\350\275\246\347\216\213", 0)
        );
        color1->setText(QString());
        troopBComboBox->clear();
        troopBComboBox->insertItems(0, QStringList()
         << QApplication::translate("Mainwindow", "\345\220\215\346\202\254\344\272\214\347\272\277\357\274\210\342\212\231\317\211\342\212\231\357\274\211", 0)
         << QApplication::translate("Mainwindow", "\342\212\231\342\226\275\342\212\231\350\277\231\344\270\252\350\241\250\346\203\205\345\245\275\351\255\224\346\200\247\342\212\231\342\226\275\342\212\231", 0)
         << QApplication::translate("Mainwindow", "\350\210\222\351\251\254\350\265\253", 0)
         << QApplication::translate("Mainwindow", "\350\267\221\350\267\221\345\215\241\344\270\201\350\275\246", 0)
         << QApplication::translate("Mainwindow", "cowpool", 0)
         << QApplication::translate("Mainwindow", "\345\210\253\351\200\274\346\210\221\345\220\246\345\210\231\344\275\240\345\260\206\345\244\261\345\216\273\344\275\240\347\232\204\347\210\270\347\210\270", 0)
         << QApplication::translate("Mainwindow", "\345\206\215\346\222\236\346\210\221\346\210\221\345\260\261\350\246\201\346\212\245\350\255\246\345\225\246", 0)
         << QApplication::translate("Mainwindow", "\351\230\237\345\220\215\345\276\210\351\225\277\345\276\210\351\225\277\345\276\210\351\225\277\344\271\237\344\274\232\351\205\261\346\262\271\351\230\237", 0)
         << QApplication::translate("Mainwindow", "\344\272\214\345\215\201\344\272\224\345\217\267\357\274\210@\342\226\224\342\200\224\342\226\224@\357\274\211", 0)
         << QApplication::translate("Mainwindow", "\344\273\212\345\271\264\350\277\230\350\246\201\350\207\252\345\212\233\346\233\264\347\224\237~", 0)
         << QApplication::translate("Mainwindow", "Sample", 0)
         << QApplication::translate("Mainwindow", "\350\200\201\345\217\270\345\237\272\345\270\246\350\267\257\345\260\261\351\227\256\344\275\240\344\273\254\346\200\225\344\270\215\346\200\225", 0)
         << QApplication::translate("Mainwindow", "\346\230\237\351\231\205\351\243\231\350\275\246\347\216\213", 0)
         << QApplication::translate("Mainwindow", "NewBie", 0)
         << QApplication::translate("Mainwindow", "\347\263\273\347\273\237\345\207\275\346\225\260\344\270\215\350\203\275\351\232\217\344\276\277\350\260\203\347\224\250", 0)
         << QApplication::translate("Mainwindow", "\351\234\207\345\212\250\347\232\204\345\260\217\350\275\246", 0)
        );
        color2->setText(QString());
        groupBox->setTitle(QString());
        pit1->setText(QString());
        pit2->setText(QString());
        pit3->setText(QString());
        pit4->setText(QString());
        imageLableMask->setText(QString());
        imagePauseLable->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Mainwindow: public Ui_Mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
