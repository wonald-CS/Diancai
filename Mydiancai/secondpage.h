#ifndef SECONDPAGE_H
#define SECONDPAGE_H

#include <QWidget>

namespace Ui {
class SecondPage;
}

class SecondPage : public QWidget
{
    Q_OBJECT

public:
    explicit SecondPage(QWidget *parent = nullptr);
    ~SecondPage();

private slots:
    void on_pushButton_4_released();

    void on_pushButton_3_released();

    void on_pushButton_released();

    void on_pushButton_5_released();

    void on_pushButton_6_released();

    void on_pushButton_7_released();

    void on_pushButton_8_released();

    void on_pushButton_9_released();

    void on_pushButton_10_released();

    void on_pushButton_11_released();

    void on_pushButton_12_released();

    void on_pushButton_13_released();

    void on_pushButton_16_released();

    void on_pushButton_18_released();

    void on_pushButton_14_released();

    void on_pushButton_23_released();

    void on_pushButton_22_released();

    void on_pushButton_19_released();

    void on_pushButton_21_released();

    void on_pushButton_17_released();

    void on_pushButton_15_released();

    void on_pushButton_20_released();

    void on_pushButton_2_released();

private:
    Ui::SecondPage *ui;
};

#endif // SECONDPAGE_H
