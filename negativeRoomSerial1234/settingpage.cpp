#include "settingpage.h"
#include "ui_settingpage.h"
#include <QFile>
#include <QTextStream>

settingPage::settingPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingPage)
{
    ui->setupUi(this);

    QFile inputFile("temp.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
         QString line="";
       QTextStream in(&inputFile);
       in >> line;
       inputFile.close();
       ui->spinBox->setValue(line.toInt());

    }

}

settingPage::~settingPage()
{
    delete ui;
}



void settingPage::on_pushButton_clicked()
{
    QFile f("temp.txt");
    f.open(QIODevice::WriteOnly);
    QTextStream stream( &f );
    stream << QString::number(ui->spinBox->value());
    f.close();
}

void settingPage::on_standard_clicked()
{
    emit standardOrNegative(0);
}

void settingPage::on_negative_clicked()
{
    emit standardOrNegative(1);
}

void settingPage::on_pushButton_2_clicked()
{
    this->close();
}

void settingPage::on_testMode_clicked()
{
    emit standardOrNegative(ui->comboBox->currentIndex()+2);
}
