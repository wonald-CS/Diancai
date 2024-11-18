#ifndef ZONGJIA_H
#define ZONGJIA_H

#include <QWidget>

namespace Ui {
class zongjia;
}

class zongjia : public QWidget
{
    Q_OBJECT

public:
    explicit zongjia(QWidget *parent = nullptr);
    ~zongjia();
    void beepON();
    void beepOFF();

private slots:
    void on_pushButton_2_released();

    void on_pushButton_released();

private:
    Ui::zongjia *ui;
};

#endif // ZONGJIA_H
