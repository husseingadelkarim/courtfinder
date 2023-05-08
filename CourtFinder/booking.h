#ifndef BOOKING_H
#define BOOKING_H

#include <QWidget>

namespace Ui {
class booking;
}

class booking : public QWidget
{
    Q_OBJECT

public:
    explicit booking(QWidget *parent = nullptr);
    ~booking();

private slots:
    void on_calendarWidget_clicked(const QDate &date);

    void on_pushButton_clicked();

private:
    Ui::booking *ui;
};

#endif // BOOKING_H
