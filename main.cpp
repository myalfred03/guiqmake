#include "rosgui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ROSGUI w;
//    Ui z;
    //SecondWindow w1;
    w.show();
//    z.show();
   // w1.show();

    return a.exec();
}
