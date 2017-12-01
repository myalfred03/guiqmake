#include "secondwindow.h"
#include "rosgui.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
   QPixmap pix(":/images/img/CD.png");
   ui->label->setPixmap(pix);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{   /*ROSGUI *guir;
    guir = new ROSGUI(this);
    this->close();
    guir ->show();*/

   close();
}
