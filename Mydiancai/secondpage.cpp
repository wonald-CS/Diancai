#include "secondpage.h"
#include "ui_secondpage.h"
#include "zongjia.h"
#include "widget.h"
#include "first_page_pic.h"
#include <QThread>

extern int buf[20];

SecondPage::SecondPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecondPage)
{
    ui->setupUi(this);
    ui->lineEdit->setText(QString::number(buf[10]));
    ui->lineEdit_2->setText(QString::number(buf[11]));
    ui->lineEdit_3->setText(QString::number(buf[12]));
    ui->lineEdit_4->setText(QString::number(buf[13]));
    ui->lineEdit_5->setText(QString::number(buf[14]));
    ui->lineEdit_6->setText(QString::number(buf[15]));
    ui->lineEdit_7->setText(QString::number(buf[16]));
    ui->lineEdit_8->setText(QString::number(buf[17]));
    ui->lineEdit_9->setText(QString::number(buf[18]));
    ui->lineEdit_10->setText(QString::number(buf[19]));
}

SecondPage::~SecondPage()
{
    delete ui;
}




//鱼香肉丝
void SecondPage::on_pushButton_4_released()
{
    //UI界面中名为"lineEdit"的QLineEdit组件的当前文本内容转换为int类型的数值
    int num = ui->lineEdit->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[10] = num;

    //lineEdit的文本显示设置
    ui->lineEdit->setText(QString::number(buf[10]));
}

void SecondPage::on_pushButton_5_released()
{
    int num = ui->lineEdit->text().toInt();
    num ++;

    buf[10] = num;
    ui->lineEdit->setText(QString::number(buf[10]));
}

//青椒炒蛋
void SecondPage::on_pushButton_6_released()
{
    int num = ui->lineEdit_2->text().toInt();   //UI界面中名为"lineEdit"的QLineEdit组件的当前文本内容转换为int类型的数值
    num --;
    if(num < 0)
        num = 0;

    buf[11] = num;
    ui->lineEdit_2->setText(QString::number(buf[11]));
}

void SecondPage::on_pushButton_7_released()
{
    int num = ui->lineEdit_2->text().toInt();
    num ++;

    buf[11] = num;
    ui->lineEdit_2->setText(QString::number(buf[11]));
}

//土豆丝
void SecondPage::on_pushButton_8_released()
{
    int num = ui->lineEdit_3->text().toInt();   //UI界面中名为"lineEdit"的QLineEdit组件的当前文本内容转换为int类型的数值
    num --;
    if(num < 0)
        num = 0;

    buf[12] = num;
    ui->lineEdit_3->setText(QString::number(buf[12]));
}

void SecondPage::on_pushButton_9_released()
{
    int num = ui->lineEdit_3->text().toInt();
    num ++;

    buf[2] = num;
    ui->lineEdit_3->setText(QString::number(buf[2]));
}

//蛋炒饭
void SecondPage::on_pushButton_10_released()
{
    int num = ui->lineEdit_4->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[13] = num;
    ui->lineEdit_4->setText(QString::number(buf[13]));
}

void SecondPage::on_pushButton_11_released()
{
    int num = ui->lineEdit_4->text().toInt();
    num ++;


    buf[13] = num;
    ui->lineEdit_4->setText(QString::number(buf[13]));
}

//水煮鱼
void SecondPage::on_pushButton_12_released()
{
    int num = ui->lineEdit_5->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[14] = num;
    ui->lineEdit_5->setText(QString::number(buf[14]));
}

void SecondPage::on_pushButton_13_released()
{
    int num = ui->lineEdit_5->text().toInt();
    num ++;


    buf[14] = num;
    ui->lineEdit_5->setText(QString::number(buf[14]));
}

//黑椒牛排
void SecondPage::on_pushButton_16_released()
{
    int num = ui->lineEdit_8->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[15] = num;
    ui->lineEdit_8->setText(QString::number(buf[15]));
}

void SecondPage::on_pushButton_18_released()
{
    int num = ui->lineEdit_8->text().toInt();
    num ++;


    buf[15] = num;
    ui->lineEdit_8->setText(QString::number(buf[15]));
}

//宫保鸡丁
void SecondPage::on_pushButton_14_released()
{
    int num = ui->lineEdit_6->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[16] = num;
    ui->lineEdit_6->setText(QString::number(buf[16]));
}

void SecondPage::on_pushButton_23_released()
{
    int num = ui->lineEdit_6->text().toInt();
    num ++;


    buf[16] = num;
    ui->lineEdit_6->setText(QString::number(buf[16]));
}

//羊肉拉面
void SecondPage::on_pushButton_22_released()
{
    int num = ui->lineEdit_7->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[17] = num;
    ui->lineEdit_7->setText(QString::number(buf[17]));
}

void SecondPage::on_pushButton_19_released()
{
    int num = ui->lineEdit_7->text().toInt();
    num ++;

    buf[17] = num;
    ui->lineEdit_7->setText(QString::number(buf[17]));
}

//手抓饭
void SecondPage::on_pushButton_21_released()
{
    int num = ui->lineEdit_9->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[18] = num;
    ui->lineEdit_9->setText(QString::number(buf[18]));
}

void SecondPage::on_pushButton_17_released()
{
    int num = ui->lineEdit_9->text().toInt();
    num ++;

    buf[8] = num;
    ui->lineEdit_9->setText(QString::number(buf[8]));
}

//大盘菜
void SecondPage::on_pushButton_15_released()
{
    int num = ui->lineEdit_10->text().toInt();
    num --;
    if(num < 0)
        num = 0;

    buf[19] = num;
    ui->lineEdit_10->setText(QString::number(buf[19]));
}

void SecondPage::on_pushButton_20_released()
{
    int num = ui->lineEdit_10->text().toInt();
    num ++;

    buf[19] = num;
    ui->lineEdit_10->setText(QString::number(buf[19]));
}

//确定
void SecondPage::on_pushButton_3_released()
{
    zongjia *beep=new zongjia;
    beep->beepON();
    QThread::msleep(20);
    beep->beepOFF();

    zongjia *NumAndPrice = new zongjia;
    NumAndPrice->show();
}

//上一页
void SecondPage::on_pushButton_released()
{
    zongjia *beep=new zongjia;
    beep->beepON();
    QThread::msleep(20);
    beep->beepOFF();

    Widget *BackToWidget = new Widget;
    BackToWidget->show();
}




void SecondPage::on_pushButton_2_released()
{
    First_Page_Pic *First_Pic = new First_Page_Pic;
    First_Pic->show();
}

