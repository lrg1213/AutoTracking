/********************************************************************************
** Form generated from reading UI file 'overdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERDIALOG_H
#define UI_OVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Overdialog
{
public:
    QLabel *label_3;
    QLabel *resultLabel;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *winnerLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLCDNumber *lcdNumberBM;
    QLabel *label_8;
    QLCDNumber *lcdNumberBS;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLCDNumber *lcdNumberAM;
    QLabel *label_7;
    QLCDNumber *lcdNumberAS;

    void setupUi(QWidget *Overdialog)
    {
        if (Overdialog->objectName().isEmpty())
            Overdialog->setObjectName(QStringLiteral("Overdialog"));
        Overdialog->resize(512, 287);
        label_3 = new QLabel(Overdialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 20, 291, 51));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(" color: rgb(255, 255, 255);"));
        resultLabel = new QLabel(Overdialog);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        resultLabel->setGeometry(QRect(40, 160, 151, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        resultLabel->setFont(font1);
        resultLabel->setStyleSheet(QStringLiteral(" color: rgb(255, 255, 255);"));
        label_2 = new QLabel(Overdialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 100, 54, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Aharoni"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral(" color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(Overdialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 220, 121, 31));
        pushButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(38, 38, 38); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(111, 111, 83); }"));
        winnerLabel = new QLabel(Overdialog);
        winnerLabel->setObjectName(QStringLiteral("winnerLabel"));
        winnerLabel->setGeometry(QRect(220, 170, 271, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Aharoni"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        winnerLabel->setFont(font3);
        winnerLabel->setStyleSheet(QStringLiteral(" color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(Overdialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 80, 191, 71));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QStringLiteral("Aharoni"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        label_5->setFont(font4);
        label_5->setAutoFillBackground(false);
        label_5->setStyleSheet(QStringLiteral(" color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_5);

        lcdNumberBM = new QLCDNumber(layoutWidget);
        lcdNumberBM->setObjectName(QStringLiteral("lcdNumberBM"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lcdNumberBM->sizePolicy().hasHeightForWidth());
        lcdNumberBM->setSizePolicy(sizePolicy1);
        lcdNumberBM->setStyleSheet(QLatin1String(" color: rgb(255, 255, 255);\n"
"border-style:transparent; color: rgb(255, 255, 255);"));
        lcdNumberBM->setDigitCount(2);
        lcdNumberBM->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumberBM);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font5;
        font5.setFamily(QStringLiteral("Aharoni"));
        font5.setPointSize(26);
        font5.setBold(true);
        font5.setWeight(75);
        label_8->setFont(font5);
        label_8->setStyleSheet(QStringLiteral("color:rgb(255,255,255);"));

        horizontalLayout_2->addWidget(label_8);

        lcdNumberBS = new QLCDNumber(layoutWidget);
        lcdNumberBS->setObjectName(QStringLiteral("lcdNumberBS"));
        sizePolicy1.setHeightForWidth(lcdNumberBS->sizePolicy().hasHeightForWidth());
        lcdNumberBS->setSizePolicy(sizePolicy1);
        lcdNumberBS->setStyleSheet(QLatin1String(" color: rgb(255, 255, 255);\n"
"border-style:transparent; color: rgb(255, 255, 255);"));
        lcdNumberBS->setDigitCount(2);
        lcdNumberBS->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumberBS);

        layoutWidget1 = new QWidget(Overdialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 80, 191, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font4);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral(" color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label);

        lcdNumberAM = new QLCDNumber(layoutWidget1);
        lcdNumberAM->setObjectName(QStringLiteral("lcdNumberAM"));
        sizePolicy1.setHeightForWidth(lcdNumberAM->sizePolicy().hasHeightForWidth());
        lcdNumberAM->setSizePolicy(sizePolicy1);
        lcdNumberAM->setStyleSheet(QLatin1String(" color: rgb(255, 255, 255);\n"
"border-style:transparent;"));
        lcdNumberAM->setDigitCount(2);
        lcdNumberAM->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumberAM);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font5);
        label_7->setStyleSheet(QStringLiteral("color:rgb(255,255,255);"));

        horizontalLayout->addWidget(label_7);

        lcdNumberAS = new QLCDNumber(layoutWidget1);
        lcdNumberAS->setObjectName(QStringLiteral("lcdNumberAS"));
        sizePolicy1.setHeightForWidth(lcdNumberAS->sizePolicy().hasHeightForWidth());
        lcdNumberAS->setSizePolicy(sizePolicy1);
        lcdNumberAS->setStyleSheet(QLatin1String(" color: rgb(255, 255, 255);\n"
"border-style:transparent; color: rgb(255, 255, 255);"));
        lcdNumberAS->setDigitCount(2);
        lcdNumberAS->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumberAS);


        retranslateUi(Overdialog);
        QObject::connect(pushButton, SIGNAL(clicked()), Overdialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Overdialog);
    } // setupUi

    void retranslateUi(QWidget *Overdialog)
    {
        Overdialog->setWindowTitle(QApplication::translate("Overdialog", "Form", 0));
        label_3->setText(QApplication::translate("Overdialog", "GAME OVER", 0));
        resultLabel->setText(QApplication::translate("Overdialog", "WINNER:", 0));
        label_2->setText(QApplication::translate("Overdialog", "VS", 0));
        pushButton->setText(QApplication::translate("Overdialog", "\347\241\256\345\256\232", 0));
        winnerLabel->setText(QString());
        label_5->setText(QApplication::translate("Overdialog", "B\346\226\271", 0));
        label_8->setText(QApplication::translate("Overdialog", ":", 0));
        label->setText(QApplication::translate("Overdialog", "A\346\226\271", 0));
        label_7->setText(QApplication::translate("Overdialog", ":", 0));
    } // retranslateUi

};

namespace Ui {
    class Overdialog: public Ui_Overdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERDIALOG_H
