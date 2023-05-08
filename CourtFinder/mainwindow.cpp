#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "signup.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logopic("D:/SWEFirstSprint/CourtFinder/Courtfinder pic.png");
    ui -> Logo -> setPixmap(logopic);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Login_clicked()
{
    this -> hide();
    login * open = new login;
    open -> show();
}


void MainWindow::on_SignUp_clicked()
{
    this -> close();
    SignUp * open = new SignUp;
    open -> show();
}

