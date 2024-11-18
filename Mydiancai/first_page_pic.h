#ifndef FIRST_PAGE_PIC_H
#define FIRST_PAGE_PIC_H

#include <QWidget>

namespace Ui {
class First_Page_Pic;
}

class First_Page_Pic : public QWidget
{
    Q_OBJECT

public:
    explicit First_Page_Pic(QWidget *parent = nullptr);
    ~First_Page_Pic();

private:
    Ui::First_Page_Pic *ui;
};

#endif // FIRST_PAGE_PIC_H
