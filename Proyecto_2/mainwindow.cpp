#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QString"
#include <QProcess>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#define VELOCIDAD 1800
#define FRECUENCIA 60
#define VOLTAJE 120
#define TEMPERATURA 40
#define ANOS 31536000
#define MESES 2592000
#define DIAS 86400
#define HORAS 3600
#define MINUTOS 60
#define SEGUNDOS 1

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //proceso = new QProcess (parent);
    setWindowTitle("Estado del Motor");
    ui->Val_Fre->setText("0");
    ui->Val_Tem->setText("0");
    ui->Val_Vel->setText("0");
    ui->Val_Vol->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Buttom_clicked()
{
    int Tv, Tvolt, Tt;
    int car=0,car2=0, carnet[7],cont=0, top=0;
    float vel=0,fre=0, volt=0, temp=0;
    int t_an, t_me, t_di, t_ho, t_mi, t_se, cont_t;

//Verificacion de las cifras del carnet
    QString a;
    a= ui->Dato->text();
    int b;
    b=a.size();
    if (b<7)
    {
        QMessageBox::critical(this,tr("Error"),tr("Error cantidad de digitos del Carnet(7 digitos)."));

    }
    else
    {

//ejecución del codigo en c
        proceso = new QProcess ();
        QStringList command;
        command << "186.155.208.171" << a << "65000";
        QString cod="./project.bin";
        //command.append("65000");
        //command.append(a);
        //command.append("186.155.208.171");

        proceso ->start(cod,command);
        proceso ->waitForFinished();


//Lectura del archivo .txt
        ifstream infile("/home/alse/Documents/Proyecto/Proyecto_3/Proyecto/datos.txt");

        infile >> car >>vel >> fre >> volt >> temp >> top;

        car2=car;

//Separacion de las cifras del carnet para hallar parametros
        while(car2>0){
            carnet[cont]=car2%10;
            car2=car2/10;
            cont++;
        }

        Tt=carnet[0];
        Tvolt=carnet[2];
        Tv=((carnet[5]*10)+carnet[4]);

//Validación de la velocidad
        ui->Val_Vel->setText(QString::number(vel));
        ui->Est_Vel->setValue(100);
        if(vel>(VELOCIDAD-Tv) && vel<(VELOCIDAD+Tv))
            ui->Est_Vel->setStyleSheet("selection-background-color: rgb(115, 210, 22)");
        else
            ui->Est_Vel->setStyleSheet("selection-background-color: rgb(204, 0, 0)");

//Validación de la frecuencia
        ui->Val_Fre->setText(QString::number(fre));
        ui->Est_Fre->setValue(100);
        if(fre>(FRECUENCIA-(FRECUENCIA*0.05)) && fre<(FRECUENCIA+(FRECUENCIA*0.05)))
            ui->Est_Fre->setStyleSheet("selection-background-color: rgb(115, 210, 22)");
        else
            ui->Est_Fre->setStyleSheet("selection-background-color: rgb(204, 0, 0)");

//Validación del voltaje
        ui->Val_Vol->setText(QString::number(volt));
        ui->Est_Vol->setValue(100);
        if(volt>(VOLTAJE-Tvolt) && volt<(VOLTAJE+Tvolt))
            ui->Est_Vol->setStyleSheet("selection-background-color: rgb(115, 210, 22)");
        else
            ui->Est_Vol->setStyleSheet("selection-background-color: rgb(204, 0, 0)");

//Validación de la temperatura
        ui->Val_Tem->setText(QString::number(temp));
        ui->Est_Tem->setValue(100);
        if(temp>(TEMPERATURA-Tt) && temp<(TEMPERATURA+Tt))
            ui->Est_Tem->setStyleSheet("selection-background-color: rgb(115, 210, 22)");
        else
            ui->Est_Tem->setStyleSheet("selection-background-color: rgb(204, 0, 0)");

//Manejo de la Temperatura
        ui->Top_g->setText(QString::number(top));
        t_an=top/ANOS;
        ui->Top_an->setText(QString::number(t_an));
        cont_t=top-(t_an*ANOS);

        t_me=cont_t/MESES;
        ui->Top_me->setText(QString::number(t_me));
        cont_t=cont_t-(t_me*MESES);

        t_di=cont_t/DIAS;
        ui->Top_di->setText(QString::number(t_di));
        cont_t=cont_t-(t_di*DIAS);

        t_ho=cont_t/HORAS;
        ui->Top_ho->setText(QString::number(t_ho));
        cont_t=cont_t-(t_ho*HORAS);

        t_mi=cont_t/MINUTOS;
        ui->Top_mi->setText(QString::number(t_mi));
        cont_t=cont_t-(t_mi*MINUTOS);

        t_se=cont_t/SEGUNDOS;
        ui->Top_se->setText(QString::number(t_se));
        cont_t=cont_t-(t_se*SEGUNDOS);

    }
}

//selection-background-color: rgb(204, 0, 0)  rojo
//selection-background-color: rgb(115, 210, 22)  verde
//edit style Sheet





