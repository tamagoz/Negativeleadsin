/********************************************************************************
** Form generated from reading UI file 'settingpage.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGPAGE_H
#define UI_SETTINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_settingPage
{
public:
    QGroupBox *groupBox;
    QDial *dial;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QPushButton *standard;
    QPushButton *negative;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QPushButton *testMode;
    QComboBox *comboBox;

    void setupUi(QDialog *settingPage)
    {
        if (settingPage->objectName().isEmpty())
            settingPage->setObjectName(QStringLiteral("settingPage"));
        settingPage->resize(800, 480);
        groupBox = new QGroupBox(settingPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 281, 431));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        dial = new QDial(groupBox);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(10, 160, 241, 191));
        dial->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        dial->setMinimum(10);
        dial->setMaximum(40);
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(40, 60, 201, 101));
        QFont font1;
        font1.setPointSize(29);
        font1.setBold(true);
        font1.setWeight(75);
        spinBox->setFont(font1);
        spinBox->setMinimum(18);
        spinBox->setMaximum(30);
        spinBox->setValue(25);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 350, 221, 71));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("background-color: #55aaff;\n"
"border: 3px solid black;\n"
"border-radius: 5px;"));
        standard = new QPushButton(settingPage);
        standard->setObjectName(QStringLiteral("standard"));
        standard->setGeometry(QRect(550, 30, 231, 111));
        QFont font2;
        font2.setPointSize(15);
        standard->setFont(font2);
        standard->setStyleSheet(QLatin1String("background-color: #ffff7f;\n"
"border: 3px solid black;\n"
"border-radius: 5px;"));
        negative = new QPushButton(settingPage);
        negative->setObjectName(QStringLiteral("negative"));
        negative->setGeometry(QRect(550, 170, 231, 111));
        negative->setFont(font2);
        negative->setStyleSheet(QLatin1String("background-color: #ff557f;\n"
"border: 3px solid black;\n"
"border-radius: 5px;"));
        pushButton_2 = new QPushButton(settingPage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 330, 151, 101));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("background-color: #aaff7f;\n"
"border: 3px solid black;\n"
"border-radius: 5px;"));
        groupBox_2 = new QGroupBox(settingPage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 20, 201, 431));
        groupBox_2->setFont(font);
        testMode = new QPushButton(groupBox_2);
        testMode->setObjectName(QStringLiteral("testMode"));
        testMode->setGeometry(QRect(30, 70, 131, 71));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        testMode->setFont(font3);
        testMode->setStyleSheet(QLatin1String("background-color: #55aaff;\n"
"border: 3px solid black;\n"
"border-radius: 5px;"));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 190, 161, 41));

        retranslateUi(settingPage);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), dial, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(settingPage);
    } // setupUi

    void retranslateUi(QDialog *settingPage)
    {
        settingPage->setWindowTitle(QApplication::translate("settingPage", "Setting Mode", 0));
        groupBox->setTitle(QApplication::translate("settingPage", "Set Temperature", 0));
        pushButton->setText(QApplication::translate("settingPage", "Set Temperature", 0));
        standard->setText(QApplication::translate("settingPage", "Negative Low Pressure", 0));
        negative->setText(QApplication::translate("settingPage", "Negative High Pressure", 0));
        pushButton_2->setText(QApplication::translate("settingPage", "Close", 0));
        groupBox_2->setTitle(QApplication::translate("settingPage", "Test mode", 0));
        testMode->setText(QApplication::translate("settingPage", "Test Relay", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("settingPage", "Fan coil", 0)
         << QApplication::translate("settingPage", "Ex low", 0)
         << QApplication::translate("settingPage", "Ex high", 0)
         << QApplication::translate("settingPage", "Air water", 0)
         << QApplication::translate("settingPage", "Damper open", 0)
         << QApplication::translate("settingPage", "Damper close", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class settingPage: public Ui_settingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGPAGE_H
