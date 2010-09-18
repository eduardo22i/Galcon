#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool clickOn;

private slots:
    void on_horizontalSlider_valueChanged(int value);
    void on_plan2Prueba_released();
    void on_plan1Prueba_released();
    void on_btn_jugarOnline_released();
    void on_btn_salir_released();
    void on_btn_jugar_released();
};

#endif // MAINWINDOW_H
