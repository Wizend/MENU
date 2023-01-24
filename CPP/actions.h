#ifndef ACTIONSUI_H
#define ACTIONSUI_H
#include "./ex.h"

signals:

private slots:
    void actionsUi();

void Ui_MainWindow::actionsUi() {

        QString program("cmd.exe");
        QStringList parameters;
        parameters << QCoreApplication::applicationDirPath() << "tp1.exe";
        QProcess::startDetached(program, parameters);
        
}
#endif