#include "thirdwindow.h"
#include "ui_thirdwindow.h"
#include "rosgui.h"


thirdwindow::thirdwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::thirdwindow)
{

    ui->setupUi(this);
    QPixmap pix(":/images/img/CI.png");
    ui->label_2->setPixmap(pix);
}

thirdwindow::~thirdwindow()
{
    delete ui;
}


void thirdwindow::on_pushButton_clicked()
{
//    ROSGUI *guimain;
//          guimain = new ROSGUI(this);
//          this->close();
//          guimain ->show();
    close();

}
