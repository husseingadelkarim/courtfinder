#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include <QApplication>
#include <iostream>
#include <fstream>
#include <string.h>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
using namespace std;

namespace Ui {
class SignUp;
}

class SignUp : public QWidget
{
    Q_OBJECT
    QString un[50], pw[50];
    int x = 0;
    QString user, pass, passc, fname, lname, email;
    QMessageBox m;
public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();
    bool signup1(QString users, QString fname, QString lname, QString email);
    void allacounts();
    bool checkuser(QString user);
    bool checkpass(QString user, QString password);


private slots:
    void on_Login_clicked();
    void on_pushButton_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
