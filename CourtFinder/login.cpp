#include "login.h"
#include "ui_login.h"
#include "ui_signup.h"
#include "signup.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap logopic("D:/SWEFirstSprint/CourtFinder/Courtfinder pic.png");
    ui -> Logo -> setPixmap(logopic);
}

login::~login()
{
    delete ui;
}

void login::allacounts()
{
    QFile file("User&Pass.txt");
    qDebug() << "allaccounts() file opened";
        if (file.open(QIODevice::ReadOnly)) {
            QTextStream read(&file);
        while(!read.atEnd()){
            read >> un[x] >> pw[x];
            x++;
        }
        }
        file.close();
}

bool login::checkuser(QString user)
{
    bool found = false;
       allacounts();
       for(int i=0;i<=x;i++){
           if(user==un[i]){
               found = true;
               break;
           }
       }if(found){
           return true;
       } else{
           return false;
       }
}

bool login::checkpass(QString user, QString password)
{
    for(int i=0;i<=x;i++){
            if(user==un[i]){
                x=i;
                break;
            }
        }
        if(password==pw[x]){
            return true;
        }else{
            return false;
        }
}


void login::on_SignUpButton_clicked()
{
    this -> close();
    SignUp * open = new SignUp;
    open -> show();
}

void login::on_pushButton_clicked()
{
    user = ui->Username->text();
    if(user == ""){
            ui->label -> setText("User Can't be empty");
    }else{
            if(!checkuser(user))
            {
                ui->label->setText("user not found!!");
            }
            else
            {
                pass = ui->password->text();
                if(checkpass(user,pass))
                {
                    Homepage * open = new Homepage(user);
                    this -> close();
                    open -> show();
                }
                else
                {
                    ui->label->setText("incorrect password!");
                }
            }
    }
}

