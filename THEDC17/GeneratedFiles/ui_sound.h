/********************************************************************************
** Form generated from reading UI file 'sound.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOUND_H
#define UI_SOUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BackgroundMusic
{
public:
    QAction *action_Quit;
    QAction *action_SongList;
    QAction *action_Last;
    QAction *action_Next;
    QAction *action_Play;
    QAction *action_Stop;
    QAction *action_About;
    QAction *action_Support;
    QAction *action_Import;
    QAction *action_SoundPlus;
    QAction *action_SoundReduce;
    QAction *action_Mode1;
    QAction *action_Mode2;
    QAction *action_Mode3;
    QAction *action_Mode4;
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *loopButton;
    QPushButton *randomButton;
    QPushButton *itemLoopButton;
    QPushButton *sequentialButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *playButton;
    QPushButton *stopButton;
    QPushButton *quitButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *importButton;
    QPushButton *volumPlusButton;
    QPushButton *volumReduceButton;

    void setupUi(QMainWindow *BackgroundMusic)
    {
        if (BackgroundMusic->objectName().isEmpty())
            BackgroundMusic->setObjectName(QStringLiteral("BackgroundMusic"));
        BackgroundMusic->setEnabled(true);
        BackgroundMusic->resize(326, 401);
        BackgroundMusic->setAutoFillBackground(false);
        BackgroundMusic->setStyleSheet(QStringLiteral(""));
        action_Quit = new QAction(BackgroundMusic);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_SongList = new QAction(BackgroundMusic);
        action_SongList->setObjectName(QStringLiteral("action_SongList"));
        action_Last = new QAction(BackgroundMusic);
        action_Last->setObjectName(QStringLiteral("action_Last"));
        action_Next = new QAction(BackgroundMusic);
        action_Next->setObjectName(QStringLiteral("action_Next"));
        action_Play = new QAction(BackgroundMusic);
        action_Play->setObjectName(QStringLiteral("action_Play"));
        action_Stop = new QAction(BackgroundMusic);
        action_Stop->setObjectName(QStringLiteral("action_Stop"));
        action_About = new QAction(BackgroundMusic);
        action_About->setObjectName(QStringLiteral("action_About"));
        action_Support = new QAction(BackgroundMusic);
        action_Support->setObjectName(QStringLiteral("action_Support"));
        action_Import = new QAction(BackgroundMusic);
        action_Import->setObjectName(QStringLiteral("action_Import"));
        action_SoundPlus = new QAction(BackgroundMusic);
        action_SoundPlus->setObjectName(QStringLiteral("action_SoundPlus"));
        action_SoundReduce = new QAction(BackgroundMusic);
        action_SoundReduce->setObjectName(QStringLiteral("action_SoundReduce"));
        action_Mode1 = new QAction(BackgroundMusic);
        action_Mode1->setObjectName(QStringLiteral("action_Mode1"));
        action_Mode2 = new QAction(BackgroundMusic);
        action_Mode2->setObjectName(QStringLiteral("action_Mode2"));
        action_Mode3 = new QAction(BackgroundMusic);
        action_Mode3->setObjectName(QStringLiteral("action_Mode3"));
        action_Mode4 = new QAction(BackgroundMusic);
        action_Mode4->setObjectName(QStringLiteral("action_Mode4"));
        centralWidget = new QWidget(BackgroundMusic);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 201, 381));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        tableWidget->setFont(font);
        tableWidget->setAutoFillBackground(true);
        tableWidget->setStyleSheet(QStringLiteral(""));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setGridStyle(Qt::DashLine);
        tableWidget->setColumnCount(2);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(220, 130, 95, 142));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        loopButton = new QPushButton(groupBox);
        loopButton->setObjectName(QStringLiteral("loopButton"));
        QFont font2;
        font2.setFamily(QStringLiteral("Aharoni"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        loopButton->setFont(font2);
        loopButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 170, 255); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(52, 200, 144); }"));

        verticalLayout->addWidget(loopButton);

        randomButton = new QPushButton(groupBox);
        randomButton->setObjectName(QStringLiteral("randomButton"));
        randomButton->setFont(font2);
        randomButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 170, 255); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(52, 200, 144); }"));

        verticalLayout->addWidget(randomButton);

        itemLoopButton = new QPushButton(groupBox);
        itemLoopButton->setObjectName(QStringLiteral("itemLoopButton"));
        itemLoopButton->setFont(font2);
        itemLoopButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 170, 255); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(52, 200, 144); }"));

        verticalLayout->addWidget(itemLoopButton);

        sequentialButton = new QPushButton(groupBox);
        sequentialButton->setObjectName(QStringLiteral("sequentialButton"));
        sequentialButton->setFont(font2);
        sequentialButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 170, 255); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(52, 200, 144); }"));

        verticalLayout->addWidget(sequentialButton);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(220, 280, 95, 111));
        groupBox_2->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        playButton = new QPushButton(groupBox_2);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setFont(font2);
        playButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 170, 255); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(52, 200, 144); }"));

        verticalLayout_2->addWidget(playButton);

        stopButton = new QPushButton(groupBox_2);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setFont(font2);
        stopButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 170, 255); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(52, 200, 144); }"));

        verticalLayout_2->addWidget(stopButton);

        quitButton = new QPushButton(groupBox_2);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setFont(font2);
        quitButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 170, 255); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(52, 200, 144); }"));

        verticalLayout_2->addWidget(quitButton);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(220, 10, 95, 113));
        groupBox_3->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        importButton = new QPushButton(groupBox_3);
        importButton->setObjectName(QStringLiteral("importButton"));
        importButton->setFont(font2);
        importButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 170, 255); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(52, 200, 144); }"));

        verticalLayout_3->addWidget(importButton);

        volumPlusButton = new QPushButton(groupBox_3);
        volumPlusButton->setObjectName(QStringLiteral("volumPlusButton"));
        volumPlusButton->setFont(font2);
        volumPlusButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 170, 255); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(52, 200, 144); }"));

        verticalLayout_3->addWidget(volumPlusButton);

        volumReduceButton = new QPushButton(groupBox_3);
        volumReduceButton->setObjectName(QStringLiteral("volumReduceButton"));
        volumReduceButton->setFont(font2);
        volumReduceButton->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(0, 170, 255); border-radius: 9px; color: rgb(255, 255, 255); } QPushButton:hover { background-color: rgb(52, 200, 144); }"));

        verticalLayout_3->addWidget(volumReduceButton);

        BackgroundMusic->setCentralWidget(centralWidget);

        retranslateUi(BackgroundMusic);
        QObject::connect(quitButton, SIGNAL(clicked()), BackgroundMusic, SLOT(close()));

        QMetaObject::connectSlotsByName(BackgroundMusic);
    } // setupUi

    void retranslateUi(QMainWindow *BackgroundMusic)
    {
        BackgroundMusic->setWindowTitle(QApplication::translate("BackgroundMusic", "MainWindow", 0));
        action_Quit->setText(QApplication::translate("BackgroundMusic", "\351\200\200\345\207\272", 0));
        action_Quit->setShortcut(QApplication::translate("BackgroundMusic", "Ctrl+Q", 0));
        action_SongList->setText(QApplication::translate("BackgroundMusic", "\346\230\276\347\244\272/\351\232\220\350\227\217\346\222\255\346\224\276\345\210\227\350\241\250", 0));
#ifndef QT_NO_TOOLTIP
        action_SongList->setToolTip(QApplication::translate("BackgroundMusic", "\346\230\276\347\244\272/\351\232\220\350\227\217\346\222\255\346\224\276\345\210\227\350\241\250", 0));
#endif // QT_NO_TOOLTIP
        action_Last->setText(QApplication::translate("BackgroundMusic", "\344\270\212\344\270\200\351\246\226", 0));
        action_Last->setShortcut(QApplication::translate("BackgroundMusic", "Ctrl+Left", 0));
        action_Next->setText(QApplication::translate("BackgroundMusic", "\344\270\213\344\270\200\351\246\226", 0));
        action_Next->setShortcut(QApplication::translate("BackgroundMusic", "Ctrl+Right", 0));
        action_Play->setText(QApplication::translate("BackgroundMusic", "\346\222\255\346\224\276", 0));
        action_Play->setShortcut(QApplication::translate("BackgroundMusic", "Ctrl+F5", 0));
        action_Stop->setText(QApplication::translate("BackgroundMusic", "\345\201\234\346\255\242", 0));
        action_Stop->setShortcut(QApplication::translate("BackgroundMusic", "Ctrl+F2", 0));
        action_About->setText(QApplication::translate("BackgroundMusic", "\345\205\263\344\272\216\346\210\221\344\273\254", 0));
        action_About->setShortcut(QApplication::translate("BackgroundMusic", "Ctrl+A", 0));
        action_Support->setText(QApplication::translate("BackgroundMusic", "\345\205\263\344\272\216\351\205\267\351\237\263\345\220\254\345\220\254", 0));
#ifndef QT_NO_TOOLTIP
        action_Support->setToolTip(QApplication::translate("BackgroundMusic", "\345\205\263\344\272\216\351\205\267\351\237\263\345\220\254\345\220\254", 0));
#endif // QT_NO_TOOLTIP
        action_Support->setShortcut(QApplication::translate("BackgroundMusic", "Ctrl+F1", 0));
        action_Import->setText(QApplication::translate("BackgroundMusic", "\345\257\274\345\205\245\346\234\254\345\234\260\346\255\214\346\233\262", 0));
        action_Import->setShortcut(QApplication::translate("BackgroundMusic", "Ctrl+I", 0));
        action_SoundPlus->setText(QApplication::translate("BackgroundMusic", "\351\237\263\351\207\217+(20%)", 0));
        action_SoundPlus->setShortcut(QApplication::translate("BackgroundMusic", "Ctrl+Up", 0));
        action_SoundReduce->setText(QApplication::translate("BackgroundMusic", "\351\237\263\351\207\217-(20%)", 0));
        action_SoundReduce->setShortcut(QApplication::translate("BackgroundMusic", "Ctrl+Down", 0));
        action_Mode1->setText(QApplication::translate("BackgroundMusic", "\345\210\227\350\241\250\345\276\252\347\216\257", 0));
#ifndef QT_NO_TOOLTIP
        action_Mode1->setToolTip(QApplication::translate("BackgroundMusic", "\345\210\227\350\241\250\345\276\252\347\216\257", 0));
#endif // QT_NO_TOOLTIP
        action_Mode1->setShortcut(QApplication::translate("BackgroundMusic", "Alt+1", 0));
        action_Mode2->setText(QApplication::translate("BackgroundMusic", "\351\232\217\346\234\272\346\222\255\346\224\276", 0));
#ifndef QT_NO_TOOLTIP
        action_Mode2->setToolTip(QApplication::translate("BackgroundMusic", "\351\232\217\346\234\272\346\222\255\346\224\276", 0));
#endif // QT_NO_TOOLTIP
        action_Mode2->setShortcut(QApplication::translate("BackgroundMusic", "Alt+2", 0));
        action_Mode3->setText(QApplication::translate("BackgroundMusic", "\345\215\225\346\233\262\345\276\252\347\216\257", 0));
        action_Mode3->setShortcut(QApplication::translate("BackgroundMusic", "Alt+3", 0));
        action_Mode4->setText(QApplication::translate("BackgroundMusic", "\351\241\272\345\272\217\346\222\255\346\224\276", 0));
#ifndef QT_NO_TOOLTIP
        action_Mode4->setToolTip(QApplication::translate("BackgroundMusic", "\351\241\272\345\272\217\346\222\255\346\224\276", 0));
#endif // QT_NO_TOOLTIP
        action_Mode4->setShortcut(QApplication::translate("BackgroundMusic", "Alt+4", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BackgroundMusic", "\346\255\214\346\233\262", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BackgroundMusic", "\347\261\273\345\236\213", 0));
        groupBox->setTitle(QApplication::translate("BackgroundMusic", "Mode", 0));
        loopButton->setText(QApplication::translate("BackgroundMusic", "\345\205\250\351\203\250\345\276\252\347\216\257", 0));
        randomButton->setText(QApplication::translate("BackgroundMusic", "\351\232\217\346\234\272\346\222\255\346\224\276", 0));
        itemLoopButton->setText(QApplication::translate("BackgroundMusic", "\345\215\225\346\233\262\345\276\252\347\216\257", 0));
        sequentialButton->setText(QApplication::translate("BackgroundMusic", "\351\241\272\345\272\217\346\222\255\346\224\276", 0));
        groupBox_2->setTitle(QApplication::translate("BackgroundMusic", "Tool", 0));
        playButton->setText(QApplication::translate("BackgroundMusic", "\346\222\255\346\224\276", 0));
        stopButton->setText(QApplication::translate("BackgroundMusic", "\345\201\234\346\255\242", 0));
        quitButton->setText(QApplication::translate("BackgroundMusic", "\350\277\224\345\233\236", 0));
        groupBox_3->setTitle(QApplication::translate("BackgroundMusic", "Operation", 0));
        importButton->setText(QApplication::translate("BackgroundMusic", "\345\257\274\345\205\245\346\255\214\346\233\262", 0));
        volumPlusButton->setText(QApplication::translate("BackgroundMusic", "\351\237\263\351\207\217+", 0));
        volumReduceButton->setText(QApplication::translate("BackgroundMusic", "\351\237\263\351\207\217-", 0));
    } // retranslateUi

};

namespace Ui {
    class BackgroundMusic: public Ui_BackgroundMusic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOUND_H
