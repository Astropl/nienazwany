#include "main2.h"
#include "ui_main2.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <string>
#include <QString>

using namespace std;
fstream plikOdczyt;
QFile plikOdczyt2;

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

    //QFile plikOdczyt2 ("C:/Qt/Pliki/tekst.txt");
    //plikOdczyt2.open("C:/Qt/Pliki/tekst.txt",ios::in);
plikOdczyt.open("C:/Qt/Pliki/tekst.txt",ios::in);

//    if(plikOdczyt2.open(QFile::Text | QFile::ReadOnly))
//    {
//        QTextStream in(&plikOdczyt2);
//        while (!in.atEnd())
//        {
//            std::cout <<plikOdczyt2<<in.readLine();
//        }
//        plikOdczyt2.close();
//    }

   if(plikOdczyt.good()==false)
   {
       cout<<"Plik nie istnieje !!!!!";
       exit(0);
   }
   string linia; //  SPRAWDZIC W DEBUGU DLACZEGO NIE WYSWIETLA SIĘ LINIA W KONSOLI
   int nr_lini = 1;
   while (getline(plikOdczyt,linia))
   {
       switch(nr_lini)
       {
       case 1:   nrSeryjny1.toStdString() =linia ;
            cout<<nrSeryjny1.toStdString()<<endl;break;
       case 2:  producent.toStdString()=linia   ;
           std::cout<<producent.toStdString()<<endl; break;
       case 3:  model.toStdString()=linia  ;
           std::cout<<model.toStdString()<<endl; break;
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

   // Sprawdzam drugi plik do zapisu z bibl QFile
   QFile file("C:/Qt/Pliki/check.txt");
   if(file.open(QIODevice::WriteOnly | QIODevice::Text)){ // metoda open w otwiera plik w trybie tylko do odczytu z zamianą znaków \r\n ma \n
       QTextStream out(&file);
       out << "Some text to write"; // zapis danych do pliku
       file.close();
}
   if(file.open(QIODevice::ReadOnly | QIODevice::Text)){ // metoda open w otwiera plik w trybie tylko do odczytu z zamianą znaków \r\n ma \n
       QTextStream in(&file);
       while(!in.atEnd()){ // dopóki nie osiągnięto końca pliku
           qDebug() << in.readLine()<<Qt::endl; // odczyt pojedynczej linii tekstu
       QString testowa;
       //testowa.toStdString() = in.readLine();
       cout<< "Testwoa" <<endl;


       string napis = "Ala ma kota";
       cout<<napis<<" +nspaca"<<endl;

       }
       file.close();


       // Testuje sobie



//return 0;
   }

}
