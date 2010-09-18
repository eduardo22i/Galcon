#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->btn_jugar->setIcon(QIcon(":img /Resources/im1.jpg"));
    ui->btn_jugar->setIconSize(QSize(100, 100));

    ui->page->setVisible(true);
    ui->page_2->setVisible(false);
    ui->minave->setVisible(false);
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_jugar_released()
{
   //ui->page->setVisible(false);
   delete ui->page;
   ui->page_2->setVisible(true);
}

void MainWindow::on_btn_jugarOnline_released()
{

}

void MainWindow::on_btn_salir_released() {
    this->close();
}


void MainWindow::on_plan1Prueba_released() {
    ui->plan1Prueba->setText("80");
    clickOn = true;
}

void MainWindow::on_plan2Prueba_released() {

    if(clickOn) {
        ui->plan2Prueba->setText("80");
        ui->minave->setVisible(true);
        for(int i = 50; i<400; i++) {
            for(int j = 170; j>20; j++) {
                ui->minave->setGeometry(QRect(i,j,51,61));
            }
        }
        clickOn= false;
    } else {
         //ui->booltxt->setText("Este planeta no es suyo");
    }
}


void MainWindow::on_horizontalSlider_valueChanged(int value) {
    QString Q;
    ui->porcentaje->setText(Q.setNum(25*(int)(((double)value/99)*4)));
}

