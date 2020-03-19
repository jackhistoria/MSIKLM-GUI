#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
   private:
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buttonGreen_clicked();
    void on_buttonRed_clicked();
    void on_buttonPink_clicked();
    void on_buttonBlue_clicked();
    void on_buttonYellow_clicked();
    void on_buttonSky_clicked();
    void on_buttonOrange_clicked();
    void on_buttonWhite_clicked();
    void on_buttonTest_clicked();
    void on_dial_valueChanged(int value);

    void submitPattern(int);

public:
    void on_parse_error(const char*, const char*);
    int mainControl(int , char** );

private:
    Ui::MainWindow *ui;
    void show_help();
    void enumerate_hid();
};
#endif // MAINWINDOW_H
