#include "fourth.h"
#include "ui_fourth.h"

fourth::fourth(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fourth)
{
    ui->setupUi(this);
    QPixmap pix(":/images/img/dhparameter.png");
    ui->label_2->setPixmap(pix);

}

fourth::~fourth()
{
    delete ui;
}

void fourth::on_pushButton_clicked()
{
    close();
}
