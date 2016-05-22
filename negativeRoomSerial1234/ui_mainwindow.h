/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *settingBT;
    QLabel *background;
    QPushButton *onButton;
    QPushButton *offButton;
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QLabel *OP;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_16;
    QLabel *OT;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_18;
    QLabel *OH;
    QLabel *label_19;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *RP;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLabel *RT;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLabel *RH;
    QLabel *label_7;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLabel *FP;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLabel *FT;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QLabel *FH;
    QLabel *label_13;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        settingBT = new QPushButton(centralWidget);
        settingBT->setObjectName(QStringLiteral("settingBT"));
        settingBT->setGeometry(QRect(430, 370, 121, 101));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        settingBT->setFont(font);
        settingBT->setStyleSheet(QLatin1String("background-color:#55aaff;\n"
"border: 3px solid black;\n"
"border-radius: 5px;"));
        background = new QLabel(centralWidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 30, 800, 451));
        background->setPixmap(QPixmap(QString::fromUtf8(":/fancoil.gif")));
        onButton = new QPushButton(centralWidget);
        onButton->setObjectName(QStringLiteral("onButton"));
        onButton->setGeometry(QRect(560, 370, 111, 101));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        onButton->setFont(font1);
        onButton->setStyleSheet(QLatin1String("background-color: green;\n"
"border: 3px solid black;\n"
"border-radius: 5px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/on_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        onButton->setIcon(icon);
        onButton->setFlat(false);
        offButton = new QPushButton(centralWidget);
        offButton->setObjectName(QStringLiteral("offButton"));
        offButton->setGeometry(QRect(680, 370, 111, 101));
        offButton->setFont(font1);
        offButton->setStyleSheet(QLatin1String("background-color: #ff5500;\n"
"border: 3px solid black;\n"
"border-radius: 5px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/off_icon.png"), QSize(), QIcon::Normal, QIcon::On);
        offButton->setIcon(icon1);
        offButton->setFlat(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 140, 381, 71));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 391, 121));
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 0, 211, 125));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        label_14->setFont(font3);

        horizontalLayout->addWidget(label_14);

        OP = new QLabel(layoutWidget);
        OP->setObjectName(QStringLiteral("OP"));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        OP->setFont(font4);
        OP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(OP);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font3);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_15);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font3);

        horizontalLayout_8->addWidget(label_16);

        OT = new QLabel(layoutWidget);
        OT->setObjectName(QStringLiteral("OT"));
        OT->setFont(font4);
        OT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(OT);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font3);
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_17);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font3);

        horizontalLayout_9->addWidget(label_18);

        OH = new QLabel(layoutWidget);
        OH->setObjectName(QStringLiteral("OH"));
        OH->setFont(font4);
        OH->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(OH);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font3);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_19);


        verticalLayout_2->addLayout(horizontalLayout_9);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(100, 220, 281, 201));
        groupBox_2->setFont(font2);
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 40, 261, 141));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 25));
        QFont font5;
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        label_2->setFont(font5);
        label_2->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));

        horizontalLayout_5->addWidget(label_2);

        RP = new QLabel(layoutWidget_2);
        RP->setObjectName(QStringLiteral("RP"));
        RP->setMinimumSize(QSize(0, 25));
        RP->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: bold;\n"
"padding-right: 10px;"));
        RP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(RP);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(30, 0));
        label_3->setMaximumSize(QSize(30, 16777215));
        label_3->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 25));
        label_4->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));

        horizontalLayout_6->addWidget(label_4);

        RT = new QLabel(layoutWidget_2);
        RT->setObjectName(QStringLiteral("RT"));
        RT->setMinimumSize(QSize(0, 25));
        RT->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: bold;\n"
"padding-right: 10px;"));
        RT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(RT);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(30, 0));
        label_5->setMaximumSize(QSize(30, 16777215));
        label_5->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 25));
        label_6->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));

        horizontalLayout_7->addWidget(label_6);

        RH = new QLabel(layoutWidget_2);
        RH->setObjectName(QStringLiteral("RH"));
        RH->setMinimumSize(QSize(0, 25));
        RH->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: bold;\n"
"padding-right: 10px;"));
        RH->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(RH);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(30, 0));
        label_7->setMaximumSize(QSize(30, 16777215));
        label_7->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_7);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(419, 39, 371, 201));
        groupBox_3->setFont(font2);
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 50, 291, 131));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(0, 25));
        label_8->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));

        horizontalLayout_2->addWidget(label_8);

        FP = new QLabel(layoutWidget1);
        FP->setObjectName(QStringLiteral("FP"));
        FP->setMinimumSize(QSize(0, 25));
        FP->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: bold;\n"
"padding-right: 10px;"));
        FP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(FP);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(30, 0));
        label_9->setMaximumSize(QSize(30, 16777215));
        label_9->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_9);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(0, 25));
        label_10->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));

        horizontalLayout_3->addWidget(label_10);

        FT = new QLabel(layoutWidget1);
        FT->setObjectName(QStringLiteral("FT"));
        FT->setMinimumSize(QSize(0, 25));
        FT->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: bold;\n"
"padding-right: 10px;"));
        FT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(FT);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(30, 0));
        label_11->setMaximumSize(QSize(30, 16777215));
        label_11->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_11);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(0, 25));
        label_12->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));

        horizontalLayout_4->addWidget(label_12);

        FH = new QLabel(layoutWidget1);
        FH->setObjectName(QStringLiteral("FH"));
        FH->setMinimumSize(QSize(0, 25));
        FH->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: bold;\n"
"padding-right: 10px;"));
        FH->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(FH);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(30, 0));
        label_13->setMaximumSize(QSize(30, 16777215));
        label_13->setStyleSheet(QLatin1String("font: 24px;\n"
"font-weight: regular;"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_13);


        verticalLayout_3->addLayout(horizontalLayout_4);

        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 70, 81, 31));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(690, 230, 81, 31));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(6, 3, 791, 31));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        label_22->setFont(font6);
        label_22->setStyleSheet(QLatin1String("background-color: #00ff00;\n"
"border: 3px solid black;\n"
""));
        MainWindow->setCentralWidget(centralWidget);
        background->raise();
        settingBT->raise();
        onButton->raise();
        offButton->raise();
        label->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        label_20->raise();
        label_21->raise();
        label_22->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Negative Room", 0));
        settingBT->setText(QApplication::translate("MainWindow", "SETING", 0));
        background->setText(QString());
        onButton->setText(QApplication::translate("MainWindow", "ON", 0));
        offButton->setText(QApplication::translate("MainWindow", "OFF", 0));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Outside", 0));
        label_14->setText(QApplication::translate("MainWindow", "Pressure", 0));
        OP->setText(QApplication::translate("MainWindow", "-", 0));
        label_15->setText(QApplication::translate("MainWindow", "Pa", 0));
        label_16->setText(QApplication::translate("MainWindow", "Temperature", 0));
        OT->setText(QApplication::translate("MainWindow", "-", 0));
        label_17->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        label_18->setText(QApplication::translate("MainWindow", "Humidity", 0));
        OH->setText(QApplication::translate("MainWindow", "-", 0));
        label_19->setText(QApplication::translate("MainWindow", "RH", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Room", 0));
        label_2->setText(QApplication::translate("MainWindow", "Pressure :", 0));
        RP->setText(QApplication::translate("MainWindow", "-", 0));
        label_3->setText(QApplication::translate("MainWindow", "Pa", 0));
        label_4->setText(QApplication::translate("MainWindow", "Temperature :", 0));
        RT->setText(QApplication::translate("MainWindow", "-", 0));
        label_5->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        label_6->setText(QApplication::translate("MainWindow", "Humidity :", 0));
        RH->setText(QApplication::translate("MainWindow", "-", 0));
        label_7->setText(QApplication::translate("MainWindow", "RH", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Fancoil", 0));
        label_8->setText(QApplication::translate("MainWindow", "Pressure :", 0));
        FP->setText(QApplication::translate("MainWindow", "-", 0));
        label_9->setText(QApplication::translate("MainWindow", "Pa", 0));
        label_10->setText(QApplication::translate("MainWindow", "Temperature :", 0));
        FT->setText(QApplication::translate("MainWindow", "-", 0));
        label_11->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        label_12->setText(QApplication::translate("MainWindow", "Humidity :", 0));
        FH->setText(QApplication::translate("MainWindow", "-", 0));
        label_13->setText(QApplication::translate("MainWindow", "RH", 0));
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Fan Coil 1</span></p></body></html>", 0));
        label_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Fan Coil 2</span></p></body></html>", 0));
        label_22->setText(QApplication::translate("MainWindow", "NEGATIVE PRESSURE ROOM ", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
