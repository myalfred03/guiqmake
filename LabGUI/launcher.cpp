#include "launcher.h"
#include <QDebug>


launcher::launcher(QObject *parent) :
    QObject(parent),
    m_process(new QProcess(this)),
    m_process2(new QProcess(this))

{

}

void launcher::launch()
{
    m_process = new QProcess();
    m_process->start("bash",QStringList() << "-i" << "-c" << \
                     "roslaunch rvizglabre launchlab.launch");
//    m_process->start("gnome-terminal --geometry=0x0+0+0 --command \"roslaunch carmen_sim navigation.launch\" ");
//                "gnome-terminal --geometry=50x10-0-10 -x bash -c \"roslaunch rvizglabre launchlab.launch\" ");
    m_process2->kill();


////    system("gnome-terminal -x bash -c 'source ~/ros_qtc_plugin/devel/setup.bash;"
////                "roslaunch rvizglabre launchlab.launch; limited:=true'&");
//    system("gnome-terminal --geometry=50x10-0-10 -x bash -c \"roscore\" ");
}

void launcher::launch2()
{
    m_process2 = new QProcess();
    m_process2->start("bash",QStringList() << "-i" << "-c" << \
                     "rosrun robot_editor robot_editor");


        int rosLaunchPid_;
        rosLaunchPid_ = m_process->pid();

        qDebug() << "processId = " << m_process->processId();
        qDebug() << "PID =" << rosLaunchPid_;

        //        int bias = 4;
        QProcess* killRosProcess = new QProcess;
        QString correctPid, cmd;

        cmd = "gnome-terminal --geometry=0x0+0+0 -x kill " + correctPid.setNum(rosLaunchPid_ /*+ bias*/);
        killRosProcess->start(cmd);
        qDebug() << "Kill the ROS launch process!";

//    m_process->terminate();
//    m_process->deleteLater();
//    m_process->kill();
//     system("killall -g roslaunch rvizglabre launchlab.launch");

}
