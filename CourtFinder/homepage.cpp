#include "homepage.h"
#include "ui_homepage.h"
#include <QMenu>
#include "courts.h"

#include <QObject>

Homepage::Homepage(QString user1,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Homepage)
{
    ui->setupUi(this);
    this->username = user1;
    ui->Welcome->setText("Hello there, " + username);
    QPixmap logopic("D:/SWEFirstSprint/CourtFinder/Courtfinder pic.png");
    ui -> Logo -> setPixmap(logopic);
}

Homepage::~Homepage()
{
    delete ui;
}

void Homepage::courts() {

    this -> close();
    Courts *open = new Courts;
    open -> show();

}

void Homepage::on_Football_clicked()
{
    QMenu *menu = new QMenu(this);
        QAction *action1 = new QAction(tr("New Cairo"), this);
        QAction *action2 = new QAction(tr("Sheikh Zayed"), this);
        QAction *action3 = new QAction(tr("Downtown Cairo"), this);
        menu->addAction(action1);
        menu->addAction(action2);
        menu->addAction(action3);
        menu->popup(ui->Football->mapToGlobal(QPoint(0, ui->Football->height())));
        connect(action1, SIGNAL(triggered()), this, SLOT(courts()));
        connect(action2, SIGNAL(triggered()), this, SLOT(courts()));
        connect(action3, SIGNAL(triggered()), this, SLOT(courts()));
}


void Homepage::on_Padel_clicked()
{
    QMenu *menu = new QMenu(this);
        QAction *action1 = new QAction("New Cairo", this);
        QAction *action2 = new QAction("Sheikh Zayed", this);
        QAction *action3 = new QAction("Downtown Cairo", this);
        menu->addAction(action1);
        menu->addAction(action2);
        menu->addAction(action3);
        menu->popup(ui->Padel->mapToGlobal(QPoint(0, ui->Padel->height())));
        connect(action1, SIGNAL(triggered()), this, SLOT(courts()));
        connect(action2, SIGNAL(triggered()), this, SLOT(courts()));
        connect(action3, SIGNAL(triggered()), this, SLOT(courts()));
}


void Homepage::on_Basketball_clicked()
{
    QMenu *menu = new QMenu(this);
        QAction *action1 = new QAction("New Cairo", this);
        QAction *action2 = new QAction("Sheikh Zayed", this);
        QAction *action3 = new QAction("Downtown Cairo", this);
        menu->addAction(action1);
        menu->addAction(action2);
        menu->addAction(action3);
        menu->popup(ui->Basketball->mapToGlobal(QPoint(0, ui->Basketball->height())));
        connect(action1, SIGNAL(triggered()), this, SLOT(courts()));
        connect(action2, SIGNAL(triggered()), this, SLOT(courts()));
        connect(action3, SIGNAL(triggered()), this, SLOT(courts()));
}


