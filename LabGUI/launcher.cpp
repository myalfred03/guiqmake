#include "launcher.h"

launcher::launcher(QObject *parent) :
    QObject(parent),
    m_process(new QProcess(this))
{

}

void launcher::launch()
{
    m_process->start("bash",QStringList() << "-i" << "-c" << \
                     "rosrun rvizglabre rvizglabre");
}
