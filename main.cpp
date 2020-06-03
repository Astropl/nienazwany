#include "mainwindow.h"
#include <iostream>
#include <fstream>
#include <QApplication>
using namespace std;

//string nrSeryjny, producent, model;

int main(int argc, char *argv[])
{ //fstream plik ( "plik.txt", ios::out);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
