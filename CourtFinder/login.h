#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <fstream>
#include <QFile>
#include <QTextStream>
#include "homepage.h"
#include <QMessageBox>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT
    QString user, pass;
    QString un[50];
    QString pw[50];
    int x = 0;

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
    void allacounts();
    bool checkuser(QString user);
    bool checkpass(QString user, QString password);

private slots:


    void on_pushButton_clicked();

    void on_SignUpButton_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
