#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QUrl>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    double dol=0;
    double euro=0;
    double impot=0;
    double now=0;
    double res=0;
    double impot2=0;
    QMediaPlayer *player = new QMediaPlayer;
     bool pl=false;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
   void digits_numbers();
    //void digits_numbers_Dol()
   void on_pushButton_Tochka_clicked();
   void on_pushButton_AC_clicked();
   void on_pushButton_ravno_clicked();
   void on_pushButton_back_clicked();
   void on_pushButton_secret_clicked();
   void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
