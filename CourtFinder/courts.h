#ifndef COURTS_H
#define COURTS_H

#include <QWidget>

namespace Ui {
class Courts;
}

class Courts : public QWidget
{
    Q_OBJECT

public:
    explicit Courts(QWidget *parent = nullptr);
    ~Courts();

private slots:


    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();

private:
    Ui::Courts *ui;
};

#endif // COURTS_H
