#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <QtWidgets>
#include <QtCore>
#include <QApplication>
#include "ex.h"

int main(int argc, char *argv[]){

    QApplication a(argc, argv);
    QMainWindow Ui_MainWindow;
    Ui::MainWindow ui;
    ui.setupUi(&Ui_MainWindow);
    Ui_MainWindow.show();
    return a.exec();

}