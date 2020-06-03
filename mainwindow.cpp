#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <QApplication>
#include <iostream>
#include "main2.h"
#include "ui_main2.h"



using namespace std;
fstream plik;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //okienko2 = new main2;

}

MainWindow::~MainWindow()
{

    delete ui;
    //delete okienko2;
}


void MainWindow::on_pushButton_clicked()
{//nrSeryjny= ui->lineEdit->gettext();
    //ui->lineEdit->text() = ui->lineEdit->setText("cos");
QString nrSeryjny1 = ui->lineEdit1->text();
QString producent = ui->lineEdit2->text();
QString model = ui->lineEdit3->text();

    plik.open("C:/Qt/Pliki/tekst.txt",ios::out | ios::app);

    std::cout<<nrSeryjny1.toStdString()<<endl;
    std::cout<<producent.toStdString()<<endl;
    std::cout<<model.toStdString()<<endl;


    plik<<nrSeryjny1.toStdString()<<endl;
    plik<<producent.toStdString()<<endl;
    plik<<model.toStdString()<<endl;

    plik.close();

}

void MainWindow::on_pushButton_2_clicked()
{// Drugie okno z lista.

    Main2 okno2;
    okno2.setModal(true);
    okno2.exec();
    //okno2.show();

    //QMainWindow okno2 = new QMainWindow();
    //okno2->show();


    //return .exec();
//    Main2 drugieOkno = new Main2 ();
//    Main2 * drugieOkno = new Main2();
//    drugieOkno ->show();
//    drugieOkno.myShow();

    //okienko2->show();
    //QApplication a(argc, argv);

    //main2 w= new main2 ();
    //w.show();
    //return a.exec();
}
