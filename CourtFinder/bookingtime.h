#ifndef BOOKINGTIME_H
#define BOOKINGTIME_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>

namespace Ui {
class bookingTime;
}

class bookingTime : public QWidget
{
    Q_OBJECT

public:
    explicit bookingTime(QString date1, QWidget *parent = nullptr);
    ~bookingTime();
    QString date;
    QMessageBox m;
    bool x = false;
    void avalability1();
    void avalability2();
    void avalability3();
    void avalability4();
    void avalability5();
    void avalability6();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::bookingTime *ui;
};

#endif // BOOKINGTIME_H
