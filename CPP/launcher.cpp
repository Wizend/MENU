#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <QtWidgets>
#include <QtCore>
#include <QApplication>
#include "ex.h"

// void Ui_MainWindow::actionsUi() {

//         QString program("cmd.exe");
//         QStringList parameters;
//         parameters << QCoreApplication::applicationDirPath() << "tp1.exe";
//         QProcess::startDetached(program, parameters);
        
// }

int main(int argc, char *argv[]){

    QApplication app(argc, argv);
    return app.exec();
}