#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <QtWidgets>
#include <QtCore>
#include <QApplication>
#include "ex.h"

int main(int argc, char *argv[]){

    QApplication app(argc, argv);

    qDebug() << "A";

    return app.exec();
}