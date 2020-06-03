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

{std::cout<<"tererfere"<<endl;
    //Main2 *o;
    ui->setupUi(this);
}

Main2::~Main2()
{ //std::cout<<"nrSeryjny1".toStdString()<<endl;
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
       case 1: nrSeryjny1;
           std::cout<<nrSeryjny1.toStdString()<<endl;break;
       case 2: producent; std::cout<<producent.toStdString()<<endl; break;
       case 3: model;std::cout<<model.toStdString()<<endl; break;
       }


       nr_lini ++;

   }
//   std::cout<<nrSeryjny1.toStdString()<<endl;
//   std::cout<<producent.toStdString()<<endl;
//   std::cout<<model.toStdString()<<endl;


//   plik<<nrSeryjny1.toStdString()<<endl;
//   plik<<producent.toStdString()<<endl;
//   plik<<model.toStdString()<<endl;

   plikOdczyt.close();

}
