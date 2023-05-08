#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include "ui_homepage.h"

namespace Ui {
class Homepage;
}

class Homepage : public QWidget
{
    Q_OBJECT

public:
    explicit Homepage(QString user1, QWidget *parent = nullptr);
    ~Homepage();
    QString username;



private slots:
    void on_Football_clicked();

    void on_Padel_clicked();

    void on_Basketball_clicked();

    void courts();


private:
    Ui::Homepage *ui;
};

#endif // HOMEPAGE_H
