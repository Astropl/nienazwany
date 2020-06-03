#include "main2.h"
#include "ui_main2.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <QApplication>

using namespace std;
fstream plikOdczyt;

Main2::Main2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Main2)

{
    //Main2 *o;
    ui->setupUi(this);
}

Main2::~Main2()
{
    delete ui;
}

void Main2::on_pushButton_clicked()
{
    QString nrSeryjny1 ;
    QString producent ;
    QString model;
   plikOdczyt.open("C:/Qt/Pliki/tekst.txt",ios::in);
   if(plikOdczyt.good()==false)
   {
       cout<<"Plik nie istnieje !!!!!";
       exit(0);
   }
   string linia;
   int nr_lini = 1;
   while (getline(plikOdczyt,linia))
   {
       switch(nr_lini)
       {
       case 1: nrSeryjny1; break;
       case 2: producent; break;
       case 3: model; break;
       }


       nr_lini ++;

   }
   std::cout<<nrSeryjny1.toStdString()<<endl;
   std::cout<<producent.toStdString()<<endl;
   std::cout<<model.toStdString()<<endl;


//   plik<<nrSeryjny1.toStdString()<<endl;
//   plik<<producent.toStdString()<<endl;
//   plik<<model.toStdString()<<endl;

   plikOdczyt.close();

}
