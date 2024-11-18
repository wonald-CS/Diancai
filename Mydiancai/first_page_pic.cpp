#include "first_page_pic.h"
#include "ui_first_page_pic.h"
#include <QThread>

First_Page_Pic::First_Page_Pic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::First_Page_Pic)
{
    ui->setupUi(this);

    QImage image("/home/alientek/linux/nfs/Mydiancai/pic/0.png");
    ui->label->setPixmap(QPixmap::fromImage(image));
    ui->label->resize(120,170);
    //ui->label->show();
}

First_Page_Pic::~First_Page_Pic()
{
    delete ui;
}
