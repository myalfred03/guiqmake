#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <QObject>
#include <QProcess>

class launcher : public QObject
{
    Q_OBJECT
public:
    explicit launcher(QObject *parent = nullptr);

    Q_INVOKABLE void launch();
private:
    QProcess *m_process;
};

#endif // LAUNCHER_H
