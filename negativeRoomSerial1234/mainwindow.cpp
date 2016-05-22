#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QByteArray>
#include <QTime>
#include <QMovie>
#include <QFile>
#include <QTextStream>


QSerialPort serial;
QByteArray serialData;
int serialReady = 0;
int state = 0;
int negative_mode = 0;
int onOffState = 0;
int cTemp = 25;
int rTemp = 0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    reqData = new QTimer(this);
    reqData->setInterval(1000);
    s = new settingPage(this);

    ui->setupUi(this);
    //serial.setPortName("COM6");
    serial.setPortName("ttyAMA0");
    serial.setBaudRate(serial.Baud9600);
    serial.setDataBits(serial.Data8);
    serial.setParity(serial.NoParity);
    serial.setStopBits(serial.OneStop);
    serial.setFlowControl(serial.NoFlowControl);
   // connect(&serial, SIGNAL(readyRead()), this, SLOT(readData()));
     if(serial.open(QIODevice::ReadWrite)){
         serialReady = 1;

    }else{
        ui->label->setText("Sensor isn't detect");
        serialReady = 0;
    }
    connect(reqData, SIGNAL(timeout()), this, SLOT(updateData()));
    connect(s, SIGNAL(standardOrNegative(int)), this, SLOT(standardOrNegative(int)));
    reqData->start();
}

MainWindow::~MainWindow()
{
    delete ui;
    serial.close();
}

void MainWindow::standardOrNegative(int value)
{
    negative_mode = value;
}

void MainWindow::on_settingBT_clicked()
{
   s->open();

}


void MainWindow::updateData()
{
    QByteArray
            command = "c\r\n";

    if(serialReady == 1){
        switch(state)
        {
            case 0:
                if(negative_mode == 2){
                    command = "1\r\n";
                }else if(negative_mode == 3){
                    serial.write("2");
                    command = "2\r\n";
                }else if(negative_mode == 4){
                    command = "3\r\n";
                }else if(negative_mode == 5){
                    command = "4\r\n";

                }else if(negative_mode == 6){

                    command = "5\r\n";
                }else if(negative_mode == 7){

                    command = "6\r\n";
                }else{
                    command = "c\r\n";
                }

            break;
            case 1:
                if(negative_mode == 0){
                    if(rTemp > cTemp){
                        command = "d\r\n";

                    }else{
                        command = "a\r\n";
                    }
                }else if(negative_mode == 1){
                    if(rTemp > cTemp){
                        command = "e\r\n";
                    }else{
                        command = "b\r\n";

                    }
                }
            break;
            default:
            break;
        }
    }else {
        if(onOffState == 1){
            QPixmap pix(":/fancoil.gif");
            ui->background->setPixmap(pix);
            onOffState = 0;
            state = 0;
        }
    }
    QString inData = "";
    serial.write(command);
    inData.append(serial.read(70));


    QStringList list = inData.split(",");
    if(list.length() >= 5){

        QString sOP = list[3];

        sOP.chop(2);
        int randomOP = (qrand()%90)+10;
        sOP.append(QString::number(randomOP));
        ui->OP->setText(sOP);
        ui->OT->setText(list[1]);
        ui->OH->setText(list[2]);

        ui->RP->setText(list[3]);
        ui->RT->setText(list[4]);
        sOP = list[5];
        sOP.chop(1);
        ui->RH->setText(sOP);

        QStringList tmpRT = list[4].split(".");
        QStringList tmpRH = list[5].split(".");
        try{
        rTemp = tmpRT[0].toInt();

        QString sFT = QString::number(tmpRT[0].toInt()-9);
        QString sFH = QString::number(tmpRH[0].toInt()-7);

        sFT.append(".");
        sFT.append(tmpRT[1]);
        sFH.append(".");
        sFH.append(tmpRH[1]);
        sFH.chop(1);


        sOP = list[3];
        sOP.chop(2);
        randomOP = (qrand()%90)+10;
        sOP.append(QString::number(randomOP));
        ui->FP->setText(sOP);
        ui->FT->setText(sFT);
        ui->FH->setText(sFH);
        }catch(...){
            ;
        }


    }
}

void MainWindow::on_onButton_clicked()
{
    if(onOffState == 0){
        QMovie *movie = new QMovie(":/fancoil.gif");
        ui->background->setMovie(movie);
        movie->start();
        onOffState = 1;
        if(state == 0){
            state = 1;
        }
    }
    QFile inputFile("temp.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
       QString line="";
       QTextStream in(&inputFile);
       in >> line;
       inputFile.close();
       QStringList tmpLine = line.split(".");
       cTemp = tmpLine[0].toInt();
    }
}

void MainWindow::on_offButton_clicked()
{
    if(onOffState == 1){
        QPixmap pix(":/fancoil.gif");
        ui->background->setPixmap(pix);
        onOffState = 0;
        state = 0;
    }

}
