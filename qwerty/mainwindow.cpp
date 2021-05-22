#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QUrl>
#include <QMediaPlayer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::digits_numbers()
{
    if(ui->radioButton_Osnov->isChecked()
){
    QPushButton *button =( QPushButton *)sender();
      double all_numbers;
     QString new_label;
     if(((button->text())=="0")&&(ui->result_show->text().contains((".")))){
       ui->result_show->setText(ui->result_show->text()+button->text());
     }
     else{
    all_numbers=( ui->result_show->text()+button->text()).toDouble();
    impot=all_numbers;
    new_label=QString::number(all_numbers,'g',15);
    ui->result_show->setText(new_label);}
}
    if(ui->radioButtonDol->isChecked()
){
    QPushButton *button1 =( QPushButton *)sender();if(((button1->text())=="0")&&(ui->labelDol->text().contains((".")))){

        ui->labelDol->setText(ui->labelDol->text()+button1->text());
      }
      else{
     double all_numbers2;
     QString new_label2;

    all_numbers2=( ui->labelDol->text()+button1->text()).toDouble();
    dol=all_numbers2;//!!!!
    new_label2=QString::number(all_numbers2,'g',15);
    ui->labelDol->setText(new_label2);
}}

    if(ui->radioButton_Euro->isChecked()
){
    QPushButton *button2 =( QPushButton *)sender();
     double all_numbers3;
     QString new_label3;
     if(((button2->text())=="0")&&(ui->label_Euro->text().contains((".")))){

       ui->label_Euro->setText(ui->label_Euro->text()+button2->text());
     }
     else{
    all_numbers3=( ui->label_Euro->text()+button2->text()).toDouble();
    euro=all_numbers3;//!!!!
    new_label3=QString::number(all_numbers3,'g',15);
    ui->label_Euro->setText(new_label3);
     }}

}
void MainWindow::on_pushButton_Tochka_clicked()
{
    if(ui->radioButton_Osnov->isChecked()
    ){
    if(!(ui->result_show->text().contains(("."))))
     ui->result_show->setText(ui->result_show->text()+".");}

    if(ui->radioButtonDol->isChecked()
){
    if(!(ui->labelDol->text().contains(("."))))
     ui->labelDol->setText(ui->labelDol->text()+".");}
    if(ui->radioButton_Euro->isChecked()
){
        if(!(ui->label_Euro->text().contains((".")))){
           // euro=( ui->label_Euro->text()).toDouble();
         ui->label_Euro->setText(ui->label_Euro->text()+".");}}
    }
void MainWindow::on_pushButton_AC_clicked()
{
    if(ui->radioButton_Osnov->isChecked()
){
    QString new_label6;
res=0;
   new_label6=QString::number(res,'g',15);
   ui->result_show->setText(new_label6);
   impot=0;}
    if(ui->radioButtonDol->isChecked()
){
    QString new_label7;
     dol=0;
     new_label7=QString::number(dol,'g',15);
     ui->labelDol->setText(new_label7);

}
    if(ui->radioButton_Euro->isChecked()
){
     QString new_label8;
     euro=0;
     new_label8=QString::number(euro,'g',15);
     ui->label_Euro->setText(new_label8);
}
}
void MainWindow::on_pushButton_ravno_clicked()
{
     if(ui->radioButton_dollar->isChecked()
 ){
         now=impot*dol;
 }

     if(ui->radioButton_12Evro->isChecked()
      ){
euro=( ui->label_Euro->text()).toDouble();
           now=impot*euro;
      }
     if(ui->radioButton_10Rub->isChecked()
      ){
           now=impot;
      }
     if(ui->radioButtonDollar->isChecked()
      ){
           res=now/dol;
      }
     if(ui->radioButton_Evro->isChecked()
      ){
           res=now/euro;
      }
     if(ui->radioButton_Rub->isChecked()
           ){
               res=now;
           }

     QString new_label5;
    new_label5=QString::number(res,'g',15);
    ui->result_show->setText(new_label5);
    impot2=impot;
    impot=res;
}
void MainWindow::on_pushButton_back_clicked()
{
    QString new_label12;

   new_label12=QString::number(impot2,'g',15);
   ui->result_show->setText(new_label12);
   impot=impot2;
}
void MainWindow::on_pushButton_secret_clicked()
{
    if(impot==1988){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(" D:\\qtRes\\qwerty\\1988.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1998){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(" D:\\qtRes\\qwerty\\1998.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }

    if(impot==1985){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1985.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1990){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1990.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1999){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1999.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1992){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1992.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1989){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1989.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1986){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1986.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1987){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1987.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1991){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1991.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1993){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1993.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1994){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1994.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1995){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1995.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1996){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1996.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==1997){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\1997.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==2001){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\2001.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==2000){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\2000.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==2002){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\2002.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==2003){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\2003.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==2004){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\2004.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }

    if(impot==2005){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\2005.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==2006){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\2006.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==2007){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\2007.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==2008){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\2008.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==2009){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\2009.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }
    if(impot==2010){
player->stop();
    player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("D:\\qtRes\\qwerty\\2010.mp3")));
    player->setVolume(50);
    player->play();
    //player->setPlaybackRate(QMediaPlayer:)
    }

    if(impot==0){
        player->stop();
    }
}
void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton_Osnov->isChecked()
    ){
     QString new_label18;
     new_label18= ui->result_show->text();//QString::number(euro,'g',15);
     new_label18.chop(1);
     ui->result_show->setText(new_label18);}
    if(ui->radioButtonDol->isChecked()
){
        QString new_label19;
           ui->labelDol->setText(new_label19);}

 if(ui->radioButton_Euro->isChecked()){

     QString new_label20;

        new_label20= ui->label_Euro->text();
        new_label20.chop(1);

        ui->label_Euro->setText(new_label20);}

}



