#include <QDesktopWidget>
#include "rosgui.h"
#include "ui_rosgui.h"
#include "ui_mainwindow.h"
//#include "secondwindow.h"
const double FACTOR = 1;


ROSGUI::ROSGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ROSGUI)
{

//    this->showMaximized();
    QDesktopWidget desktop;

    int desktopHeight=desktop.geometry().height();
    int desktopWidth=desktop.geometry().width();
    this->resize(desktopWidth,desktopHeight);
    ui->setupUi(this);

    QPixmap pix(":/images/img/UNI-LOGOa.png");

    ui->label_3->setPixmap(pix);
//    QImage pix2(":/images/img/noun_1036042_cc.png");
//    ui->mdiArea_2->setBackground(pix2);

        connect(ui->xSlider, SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
        connect(ui->ySlider, SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
        connect(ui->zSlider, SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
        connect(ui->rollSlider, SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
        connect(ui->pitchSlider, SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
        connect(ui->yawSlider, SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));

        connect(ui->xBox, SIGNAL(valueChanged(double)), SLOT(updateSlider()));
        connect(ui->yBox, SIGNAL(valueChanged(double)), SLOT(updateSlider()));
        connect(ui->zBox, SIGNAL(valueChanged(double)), SLOT(updateSlider()));
        connect(ui->rollBox, SIGNAL(valueChanged(double)), SLOT(updateSlider()));
        connect(ui->pitchBox, SIGNAL(valueChanged(double)), SLOT(updateSlider()));
        connect(ui->yawBox, SIGNAL(valueChanged(double)), SLOT(updateSlider()));

        connect(ui->checkBox2DOFs, SIGNAL(toggled(bool)), SLOT(on_2DOF()));
        connect(ui->checkBox2DOFI, SIGNAL(toggled(bool)), SLOT(on_2DOF()));
        connect(ui->checkBox3DOFs, SIGNAL(toggled(bool)), SLOT(on_3DOF()));
        connect(ui->checkBox3DOFI, SIGNAL(toggled(bool)), SLOT(on_3DOF()));
        connect(ui->checkBox4DOFs, SIGNAL(toggled(bool)), SLOT(on_4DOF()));
        connect(ui->checkBox4DOFI, SIGNAL(toggled(bool)), SLOT(on_4DOF()));
        connect(ui->checkBox5DOFs, SIGNAL(toggled(bool)), SLOT(on_5DOF()));
        connect(ui->checkBox5DOFI, SIGNAL(toggled(bool)), SLOT(on_5DOF()));
        connect(ui->checkBox6DOFs, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
        connect(ui->checkBox6DOFI, SIGNAL(toggled(bool)), SLOT(on_6DOF()));





        connect(ui->dial1DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
        connect(ui->dial2DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
        connect(ui->dial3DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
        connect(ui->dial4DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
        connect(ui->dial5DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
        connect(ui->dial6DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));

        connect(ui->spinBox1DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
        connect(ui->spinBox2DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
        connect(ui->spinBox3DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
        connect(ui->spinBox4DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
        connect(ui->spinBox5DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
        connect(ui->spinBox6DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));


}

ROSGUI::~ROSGUI()
{
    delete ui;
}

void ROSGUI::openCD()
{
    secwindow = new SecondWindow(this);
    secwindow->show();
}

void ROSGUI::openCI()
{
    thwindow = new thirdwindow(this);
    thwindow->show();
}

void ROSGUI::openDH()
{
    fourwindow = new fourth(this);
    fourwindow->show();
}

void ROSGUI::on_pushButton_3_clicked()
{
openCD();
}

void ROSGUI::on_pushButton_2_clicked()
{

    openCI();

}

void ROSGUI::on_pushButton_4_clicked()
{
    openDH();
}



void ROSGUI::on_actionOpen_triggered()
{

}

void ROSGUI::on_actionSave_triggered()
{

}

void ROSGUI::on_actionSave_as_triggered()
{

}

void ROSGUI::on_actionExit_triggered()
{
 exit(0);
}

void ROSGUI::updateSpinboxes()
{
        ui->yBox->    blockSignals(true);
        ui->zBox->    blockSignals(true);
        ui->rollBox-> blockSignals(true);
        ui->pitchBox->blockSignals(true);
        ui->yawBox->  blockSignals(true);

        ui->xBox->    setValue((ui->xSlider->value() * FACTOR));
        ui->yBox->    setValue((ui->ySlider->value() * FACTOR));
        ui->zBox->    setValue((ui->zSlider->value() * FACTOR));
        ui->rollBox-> setValue((ui->rollSlider->value() * FACTOR));
        ui->pitchBox->setValue((ui->pitchSlider->value() * FACTOR));
        ui->yawBox->  setValue((ui->yawSlider->value() * FACTOR));


        ui->xBox->    blockSignals(false);
        ui->yBox->    blockSignals(false);
        ui->zBox->    blockSignals(false);
        ui->rollBox-> blockSignals(false);
        ui->pitchBox->blockSignals(false);
        ui->yawBox->  blockSignals(false);

}
void ROSGUI::updateSlider()
{
        ui->xSlider->    blockSignals(true);
        ui->ySlider->    blockSignals(true);
        ui->zSlider->    blockSignals(true);
        ui->rollSlider-> blockSignals(true);
        ui->pitchSlider->blockSignals(true);
        ui->yawSlider->  blockSignals(true);

        ui->xSlider->    setValue((ui->xBox->value() / FACTOR));
        ui->ySlider->    setValue((ui->yBox->value() / FACTOR));
        ui->zSlider->    setValue((ui->zBox->value() / FACTOR));
        ui->rollSlider-> setValue((ui->rollBox->value() / FACTOR));
        ui->pitchSlider->setValue((ui->pitchBox->value() / FACTOR));
        ui->yawSlider->  setValue((ui->yawBox->value() / FACTOR));


        ui->xSlider->    blockSignals(false);
        ui->ySlider->    blockSignals(false);
        ui->zSlider->    blockSignals(false);
        ui->rollSlider-> blockSignals(false);
        ui->pitchSlider->blockSignals(false);
        ui->yawSlider->  blockSignals(false);

}


void ROSGUI::updateDialer()
{

    ui->dial1DOF->    blockSignals(true);
    ui->dial2DOF->    blockSignals(true);
    ui->dial3DOF->    blockSignals(true);
    ui->dial4DOF->    blockSignals(true);
    ui->dial5DOF->    blockSignals(true);
    ui->dial6DOF->    blockSignals(true);

    ui->dial1DOF->    setValue((ui->spinBox1DOF->value() / FACTOR));
    ui->dial2DOF->    setValue((ui->spinBox2DOF->value() / FACTOR));
    ui->dial3DOF->    setValue((ui->spinBox3DOF->value() / FACTOR));
    ui->dial4DOF->    setValue((ui->spinBox4DOF->value() / FACTOR));
    ui->dial5DOF->    setValue((ui->spinBox5DOF->value() / FACTOR));
    ui->dial6DOF->    setValue((ui->spinBox6DOF->value() / FACTOR));


    ui->dial1DOF->    blockSignals(false);
    ui->dial2DOF->    blockSignals(false);
    ui->dial3DOF->    blockSignals(false);
    ui->dial4DOF->    blockSignals(false);
    ui->dial5DOF->    blockSignals(false);
    ui->dial6DOF->    blockSignals(false);

}

void ROSGUI::updateSpinboxesD()
{

    ui->spinBox1DOF->    blockSignals(true);
    ui->spinBox2DOF->    blockSignals(true);
    ui->spinBox3DOF->    blockSignals(true);
    ui->spinBox4DOF->    blockSignals(true);
    ui->spinBox5DOF->    blockSignals(true);
    ui->spinBox6DOF->    blockSignals(true);

    ui->spinBox1DOF->    setValue((ui->dial1DOF->value() * FACTOR));
    ui->spinBox2DOF->    setValue((ui->dial2DOF->value() * FACTOR));
    ui->spinBox3DOF->    setValue((ui->dial3DOF->value() * FACTOR));
    ui->spinBox4DOF->    setValue((ui->dial4DOF->value() * FACTOR));
    ui->spinBox5DOF->    setValue((ui->dial5DOF->value() * FACTOR));
    ui->spinBox6DOF->    setValue((ui->dial6DOF->value() * FACTOR));


    ui->spinBox1DOF->    blockSignals(false);
    ui->spinBox2DOF->    blockSignals(false);
    ui->spinBox3DOF->    blockSignals(false);
    ui->spinBox4DOF->    blockSignals(false);
    ui->spinBox5DOF->    blockSignals(false);
    ui->spinBox6DOF->    blockSignals(false);


}





void ROSGUI::on_2DOF()
{
        ui->dial3DOF->   setEnabled(false);
        ui->dial4DOF->   setEnabled(false);
        ui->dial5DOF->   setEnabled(false);
        ui->dial6DOF->   setEnabled(false);
        ui->spinBox3DOF->setEnabled(false);
        ui->spinBox4DOF->setEnabled(false);
        ui->spinBox5DOF->setEnabled(false);
        ui->spinBox6DOF->setEnabled(false);
}

void ROSGUI::on_3DOF()
{
        ui->dial3DOF->   setEnabled(true);
        ui->dial4DOF->   setEnabled(false);
        ui->dial5DOF->   setEnabled(false);
        ui->dial6DOF->   setEnabled(false);
        ui->spinBox3DOF->setEnabled(true);
        ui->spinBox4DOF->setEnabled(false);
        ui->spinBox5DOF->setEnabled(false);
        ui->spinBox6DOF->setEnabled(false);
}

void ROSGUI::on_4DOF()
{

        ui->dial3DOF->   setEnabled(true);
        ui->dial4DOF->   setEnabled(true);
        ui->dial5DOF->   setEnabled(false);
        ui->dial6DOF->   setEnabled(false);
        ui->spinBox3DOF->setEnabled(true);
        ui->spinBox4DOF->setEnabled(true);
        ui->spinBox5DOF->setEnabled(false);
        ui->spinBox6DOF->setEnabled(false);

}


void ROSGUI::on_5DOF()
{
        ui->dial3DOF->   setEnabled(true);
        ui->dial4DOF->   setEnabled(true);
        ui->dial5DOF->   setEnabled(true);
        ui->dial6DOF->   setEnabled(false);
        ui->spinBox3DOF->setEnabled(true);
        ui->spinBox4DOF->setEnabled(true);
        ui->spinBox5DOF->setEnabled(true);
        ui->spinBox6DOF->setEnabled(false);

}


void ROSGUI::on_6DOF()
{
       ui->dial3DOF->   setEnabled(true);
       ui->dial4DOF->   setEnabled(true);
       ui->dial5DOF->   setEnabled(true);
       ui->dial6DOF->   setEnabled(true);
       ui->spinBox3DOF->setEnabled(true);
       ui->spinBox4DOF->setEnabled(true);
       ui->spinBox5DOF->setEnabled(true);
       ui->spinBox6DOF->setEnabled(true);
}


















