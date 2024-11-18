#include "zongjia.h"
#include "ui_zongjia.h"
#include "widget.h"
#include <QDebug>
#include <QFile>
#include <QTime>
#include <QThread>

extern int buf[20];

zongjia::zongjia(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zongjia)
{
    ui->setupUi(this);

    int CaiShuLiang=0;
    int ZongJia=0;

    for(int i=0;i<20;i++)
    {
       CaiShuLiang+=buf[i];
    }
    ui->lineEdit->setText(QString::number(CaiShuLiang));

    ZongJia=buf[0]*13+buf[1]*8+buf[2]*13+buf[3]*16+buf[4]*48+buf[5]*88+buf[6]*58+buf[7]*23+buf[8]*16+buf[9]*69+buf[10]*13
             +buf[11]*8+buf[12]*13+buf[13]*16+buf[14]*48+buf[15]*88+buf[16]*58+buf[17]*23+buf[18]*16+buf[19]*69;

    ui->lineEdit_2->setText(QString::number(ZongJia));
}

zongjia::~zongjia()
{
    delete ui;
}


void zongjia::beepON()
{
    QFile file;
    //打开文件
    file.setFileName("/sys/devices/platform/leds/leds/beep/brightness");
    if(!file.open(QIODevice::ReadWrite))
        qDebug()<<file.errorString();
    //打开蜂鸣器
    file.write("1");
    file.close();
}

void zongjia::beepOFF()
{
    QFile file;
    file.setFileName("/sys/devices/platform/leds/leds/beep/brightness");
    if(!file.open(QIODevice::ReadWrite))
        qDebug()<<file.errorString();
    //关闭蜂鸣器
    file.write("0");
    file.close();
}

void zongjia::on_pushButton_2_released()
{
    zongjia::beepON();
    QThread::msleep(20);
    zongjia::beepOFF();

    Widget *BackToWidget = new Widget;
    BackToWidget->show();
}

void zongjia::on_pushButton_released()
{
    zongjia::beepON();
    QThread::msleep(20);
    zongjia::beepOFF();
}
