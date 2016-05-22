#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "settingpage.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void standardOrNegative(int value);

    void on_settingBT_clicked();



    void updateData();

    void on_onButton_clicked();

    void on_offButton_clicked();



private:
    Ui::MainWindow *ui;
    QTimer *reqData;
    settingPage *s;
};

#endif // MAINWINDOW_H
