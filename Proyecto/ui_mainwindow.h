/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Title;
    QWidget *layoutWidget;
    QVBoxLayout *Estados;
    QProgressBar *Est_Vel;
    QProgressBar *Est_Fre;
    QProgressBar *Est_Vol;
    QProgressBar *Est_Tem;
    QWidget *layoutWidget1;
    QVBoxLayout *Valores;
    QLabel *Val_Vel;
    QLabel *Val_Fre;
    QLabel *Val_Vol;
    QLabel *Val_Tem;
    QWidget *layoutWidget2;
    QVBoxLayout *Parametros;
    QLabel *Vel;
    QLabel *Fre;
    QLabel *Vol;
    QLabel *Tem;
    QPushButton *Buttom;
    QLineEdit *Dato;
    QLabel *Top;
    QLabel *Top_an;
    QLabel *Top_me;
    QLabel *Top_di;
    QLabel *Top_ho;
    QLabel *Top_mi;
    QLabel *Top_se;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *Top_g;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(497, 571);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Proyecto/logoeci.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Title = new QLabel(centralwidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(120, 40, 251, 16));
        Title->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Noto Mono\";"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(340, 180, 110, 221));
        Estados = new QVBoxLayout(layoutWidget);
        Estados->setSpacing(25);
        Estados->setObjectName(QString::fromUtf8("Estados"));
        Estados->setContentsMargins(0, 0, 0, 0);
        Est_Vel = new QProgressBar(layoutWidget);
        Est_Vel->setObjectName(QString::fromUtf8("Est_Vel"));
        Est_Vel->setStyleSheet(QString::fromUtf8(""));
        Est_Vel->setValue(0);
        Est_Vel->setTextVisible(false);

        Estados->addWidget(Est_Vel);

        Est_Fre = new QProgressBar(layoutWidget);
        Est_Fre->setObjectName(QString::fromUtf8("Est_Fre"));
        Est_Fre->setValue(0);
        Est_Fre->setTextVisible(false);

        Estados->addWidget(Est_Fre);

        Est_Vol = new QProgressBar(layoutWidget);
        Est_Vol->setObjectName(QString::fromUtf8("Est_Vol"));
        Est_Vol->setValue(0);
        Est_Vol->setTextVisible(false);

        Estados->addWidget(Est_Vol);

        Est_Tem = new QProgressBar(layoutWidget);
        Est_Tem->setObjectName(QString::fromUtf8("Est_Tem"));
        Est_Tem->setValue(0);
        Est_Tem->setTextVisible(false);

        Estados->addWidget(Est_Tem);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(230, 180, 67, 217));
        Valores = new QVBoxLayout(layoutWidget1);
        Valores->setSpacing(6);
        Valores->setObjectName(QString::fromUtf8("Valores"));
        Valores->setContentsMargins(0, 0, 0, 0);
        Val_Vel = new QLabel(layoutWidget1);
        Val_Vel->setObjectName(QString::fromUtf8("Val_Vel"));

        Valores->addWidget(Val_Vel);

        Val_Fre = new QLabel(layoutWidget1);
        Val_Fre->setObjectName(QString::fromUtf8("Val_Fre"));

        Valores->addWidget(Val_Fre);

        Val_Vol = new QLabel(layoutWidget1);
        Val_Vol->setObjectName(QString::fromUtf8("Val_Vol"));

        Valores->addWidget(Val_Vol);

        Val_Tem = new QLabel(layoutWidget1);
        Val_Tem->setObjectName(QString::fromUtf8("Val_Tem"));

        Valores->addWidget(Val_Tem);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 180, 146, 217));
        Parametros = new QVBoxLayout(layoutWidget2);
        Parametros->setSpacing(6);
        Parametros->setObjectName(QString::fromUtf8("Parametros"));
        Parametros->setContentsMargins(0, 0, 0, 0);
        Vel = new QLabel(layoutWidget2);
        Vel->setObjectName(QString::fromUtf8("Vel"));

        Parametros->addWidget(Vel);

        Fre = new QLabel(layoutWidget2);
        Fre->setObjectName(QString::fromUtf8("Fre"));

        Parametros->addWidget(Fre);

        Vol = new QLabel(layoutWidget2);
        Vol->setObjectName(QString::fromUtf8("Vol"));

        Parametros->addWidget(Vol);

        Tem = new QLabel(layoutWidget2);
        Tem->setObjectName(QString::fromUtf8("Tem"));

        Parametros->addWidget(Tem);

        Buttom = new QPushButton(centralwidget);
        Buttom->setObjectName(QString::fromUtf8("Buttom"));
        Buttom->setGeometry(QRect(180, 120, 111, 41));
        Dato = new QLineEdit(centralwidget);
        Dato->setObjectName(QString::fromUtf8("Dato"));
        Dato->setGeometry(QRect(150, 70, 161, 31));
        Top = new QLabel(centralwidget);
        Top->setObjectName(QString::fromUtf8("Top"));
        Top->setGeometry(QRect(20, 420, 141, 16));
        Top_an = new QLabel(centralwidget);
        Top_an->setObjectName(QString::fromUtf8("Top_an"));
        Top_an->setGeometry(QRect(50, 460, 51, 16));
        Top_me = new QLabel(centralwidget);
        Top_me->setObjectName(QString::fromUtf8("Top_me"));
        Top_me->setGeometry(QRect(120, 460, 51, 16));
        Top_di = new QLabel(centralwidget);
        Top_di->setObjectName(QString::fromUtf8("Top_di"));
        Top_di->setGeometry(QRect(190, 460, 51, 16));
        Top_ho = new QLabel(centralwidget);
        Top_ho->setObjectName(QString::fromUtf8("Top_ho"));
        Top_ho->setGeometry(QRect(260, 460, 41, 16));
        Top_mi = new QLabel(centralwidget);
        Top_mi->setObjectName(QString::fromUtf8("Top_mi"));
        Top_mi->setGeometry(QRect(330, 460, 41, 16));
        Top_se = new QLabel(centralwidget);
        Top_se->setObjectName(QString::fromUtf8("Top_se"));
        Top_se->setGeometry(QRect(420, 460, 41, 16));
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 490, 416, 17));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setSpacing(35);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        Top_g = new QLabel(centralwidget);
        Top_g->setObjectName(QString::fromUtf8("Top_g"));
        Top_g->setGeometry(QRect(200, 420, 101, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 497, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "Ingrese su numero de Carnet", nullptr));
        Val_Vel->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Val_Fre->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Val_Vol->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Val_Tem->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Vel->setText(QCoreApplication::translate("MainWindow", "Velocidad:", nullptr));
        Fre->setText(QCoreApplication::translate("MainWindow", "Frecuencia:", nullptr));
        Vol->setText(QCoreApplication::translate("MainWindow", "Voltaje:", nullptr));
        Tem->setText(QCoreApplication::translate("MainWindow", "Tmaperatura:", nullptr));
        Buttom->setText(QCoreApplication::translate("MainWindow", "Enviar Carnet", nullptr));
        Top->setText(QCoreApplication::translate("MainWindow", "Tiempo de operaci\303\263n", nullptr));
        Top_an->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Top_me->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Top_di->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Top_ho->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Top_mi->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Top_se->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "A\303\261os", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Meses", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "D\303\255as", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Horas", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Minutos", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Segundos", nullptr));
        Top_g->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
