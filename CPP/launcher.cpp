#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <QtCore>

static QWidget *loadUiFile(QWidget *parent){
    QFile file("./launcher.ui");
    file.open(QIODevice::ReadOnly);

    QUiLoader loader;
    return loader.load(&file, parent);
}

int main(){

    ui_TP1 = findChild<QPushButton*>("pushButton");
    ui_TP1.clicked().system("./C/tp1.exe");

    // ui_TP2 = findChild<QPushButton*>("pushButton_2");
    // ui_TP2.clicked().system("../tp2.exe");

    // ui_TP3 = findChild<QPushButton*>("pushButton_3");
    // ui_TP3.clicked().system("../tp3.exe");
}