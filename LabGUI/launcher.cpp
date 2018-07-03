#include "launcher.h"


launcher::launcher(QObject *parent) :
    QObject(parent),
    m_process(new QProcess(this)),
    m_process2(new QProcess(this))

{

}

void launcher::launch()
{
    m_process->start("bash",QStringList() << "-i" << "-c" << \
                     "rosrun rvizglabre rvizglabre");
}

void launcher::launch2()
{
    m_process2->start("bash",QStringList() << "-i" << "-c" << \
                     "rosrun robot_editor robot_editor");
    m_process->kill();
}
