#ifndef SETTINGPAGE_H
#define SETTINGPAGE_H

#include <QDialog>

namespace Ui {
class settingPage;
}

class settingPage : public QDialog
{
    Q_OBJECT

public:
    explicit settingPage(QWidget *parent = 0);
    ~settingPage();

signals :

    void standardOrNegative(int value);

private slots:


    void on_pushButton_clicked();

    void on_standard_clicked();

    void on_negative_clicked();

    void on_pushButton_2_clicked();

    void on_testMode_clicked();

//    void on_comboBox_activated(const QString &arg1);

private:
    Ui::settingPage *ui;
};

#endif // SETTINGPAGE_H
