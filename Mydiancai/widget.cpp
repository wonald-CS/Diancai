#include "widget.h"
#include "ui_widget.h"
#include "zongjia.h"
#include "secondpage.h"
#include "first_page_pic.h"
#include <QThread>

int buf[20];

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit->setText(QString::number(buf[0]));
    ui->lineEdit_2->setText(QString::number(buf[1]));
    ui->lineEdit_3->setText(QString::number(buf[2]));
    ui->lineEdit_4->setText(QString::number(buf[3]));
    ui->lineEdit_5->setText(QString::number(buf[4]));
    ui->lineEdit_6->setText(QString::number(buf[5]));
    ui->lineEdit_7->setText(QString::number(buf[6]));
    ui->lineEdit_8->setText(QString::number(buf[7]));
    ui->lineEdit_9->setText(QString::number(buf[8]));
    ui->lineEdit_10->setText(QString::number(buf[9]));
}

Widget::~Widget()
{
    delete ui;
}

//鱼香肉丝
void Widget::on_pushButton_4_released()
{
    //UI界面中名为"lineEdit"的QLineEdit组件的当前文本内容转换为int类型的数值
    int num = ui->lineEdit->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[0] = num;

    //lineEdit的文本显示设置
    ui->lineEdit->setText(QString::number(buf[0]));
}

void Widget::on_pushButton_5_released()
{
    int num = ui->lineEdit->text().toInt();
    num ++;

    buf[0] = num;
    ui->lineEdit->setText(QString::number(buf[0]));
}

//青椒炒蛋
void Widget::on_pushButton_6_released()
{
    int num = ui->lineEdit_2->text().toInt();   //UI界面中名为"lineEdit"的QLineEdit组件的当前文本内容转换为int类型的数值
    num --;
    if(num < 0)
        num = 0;

    buf[1] = num;
    ui->lineEdit_2->setText(QString::number(buf[1]));
}

void Widget::on_pushButton_7_released()
{
    int num = ui->lineEdit_2->text().toInt();
    num ++;

    buf[1] = num;
    ui->lineEdit_2->setText(QString::number(buf[1]));
}

//土豆丝
void Widget::on_pushButton_8_released()
{
    int num = ui->lineEdit_3->text().toInt();   //UI界面中名为"lineEdit"的QLineEdit组件的当前文本内容转换为int类型的数值
    num --;
    if(num < 0)
        num = 0;

    buf[2] = num;
    ui->lineEdit_3->setText(QString::number(buf[2]));
}

void Widget::on_pushButton_9_released()
{
    int num = ui->lineEdit_3->text().toInt();
    num ++;

    buf[2] = num;
    ui->lineEdit_3->setText(QString::number(buf[2]));
}

//蛋炒饭
void Widget::on_pushButton_10_released()
{
    int num = ui->lineEdit_4->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[3] = num;
    ui->lineEdit_4->setText(QString::number(buf[3]));
}

void Widget::on_pushButton_11_released()
{
    int num = ui->lineEdit_4->text().toInt();
    num ++;


    buf[3] = num;
    ui->lineEdit_4->setText(QString::number(buf[3]));
}

//水煮鱼
void Widget::on_pushButton_12_released()
{
    int num = ui->lineEdit_5->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[4] = num;
    ui->lineEdit_5->setText(QString::number(buf[4]));
}

void Widget::on_pushButton_13_released()
{
    int num = ui->lineEdit_5->text().toInt();
    num ++;


    buf[4] = num;
    ui->lineEdit_5->setText(QString::number(buf[4]));
}

//黑椒牛排
void Widget::on_pushButton_16_released()
{
    int num = ui->lineEdit_8->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[5] = num;
    ui->lineEdit_8->setText(QString::number(buf[5]));
}

void Widget::on_pushButton_18_released()
{
    int num = ui->lineEdit_8->text().toInt();
    num ++;


    buf[5] = num;
    ui->lineEdit_8->setText(QString::number(buf[5]));
}

//宫保鸡丁
void Widget::on_pushButton_14_released()
{
    int num = ui->lineEdit_6->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[6] = num;
    ui->lineEdit_6->setText(QString::number(buf[6]));
}

void Widget::on_pushButton_23_released()
{
    int num = ui->lineEdit_6->text().toInt();
    num ++;


    buf[6] = num;
    ui->lineEdit_6->setText(QString::number(buf[6]));
}

//羊肉拉面
void Widget::on_pushButton_22_released()
{
    int num = ui->lineEdit_7->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[7] = num;
    ui->lineEdit_7->setText(QString::number(buf[7]));
}

void Widget::on_pushButton_19_released()
{
    int num = ui->lineEdit_7->text().toInt();
    num ++;

    buf[7] = num;
    ui->lineEdit_7->setText(QString::number(buf[7]));
}

//手抓饭
void Widget::on_pushButton_21_released()
{
    int num = ui->lineEdit_9->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[8] = num;
    ui->lineEdit_9->setText(QString::number(buf[8]));
}

void Widget::on_pushButton_17_released()
{
    int num = ui->lineEdit_9->text().toInt();
    num ++;

    buf[8] = num;
    ui->lineEdit_9->setText(QString::number(buf[8]));
}

//大盘菜
void Widget::on_pushButton_15_released()
{
    int num = ui->lineEdit_10->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[9] = num;
    ui->lineEdit_10->setText(QString::number(buf[9]));
}

void Widget::on_pushButton_20_released()
{
    int num = ui->lineEdit_10->text().toInt();
    num ++;

    buf[9] = num;
    ui->lineEdit_10->setText(QString::number(buf[9]));
}

//确定
void Widget::on_pushButton_3_released()
{
    zongjia *beep=new zongjia;
    beep->beepON();
    QThread::msleep(20);
    beep->beepOFF();

    zongjia *NumAndPrice = new zongjia;
    NumAndPrice->show();
}

//下一页
void Widget::on_pushButton_released()
{
    zongjia *beep=new zongjia;
    beep->beepON();
    QThread::msleep(20);
    beep->beepOFF();

    SecondPage *NextPage = new SecondPage;
    NextPage->show();
}

//图片详情
void Widget::on_pushButton_2_released()
{
    First_Page_Pic *First_Pic = new First_Page_Pic;
    First_Pic->show();
}

