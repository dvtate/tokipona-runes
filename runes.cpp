#include "runes.h"
#include "ui_runes.h"

Runes::Runes(QWidget *parent):QMainWindow(parent),ui(new Ui::Runes){
  ui->setupUi(this);
  setWindowTitle(QString("Toki Pona Runes Tool"));
  setWindowIcon(QIcon("/home/tate/Desktop/toki.png"));
}
Runes::~Runes(){
  delete ui;
}

void Runes::on_latintorunic_clicked(){
  ui->runictext->setText(
    latintorunic(
      ui->latintext->toPlainText()+QString(" ")
    ).trimmed()
  );
}
void Runes::on_runictolatin_clicked(){
  ui->latintext->setText(
    runictolatin(
      ui->runictext->toPlainText()+QString(" ")
    ).trimmed()
  );
}

// ----------- RUNES NOT VISIBLE>>> PERHAPSE KANJI COMPRESSION

//conversion functions:
QString Runes::latintorunic(QString text){
  //runes are displaying as empty spaces (FML)
  text.replace(QString("p"), QString("ᛈ"));
  text.replace(QString("t"), QString("ᛏ"));
  text.replace(QString("k"), QString("ᚲ"));
  text.replace(QString("s"), QString("ᛊ"));
  text.replace(QString("m"), QString("ᛗ"));
  text.replace(QString("n"), QString("ᚾ"));
  text.replace(QString("l"), QString("ᛚ"));
  text.replace(QString("j"), QString("ᛃ"));
  text.replace(QString("w"), QString("ᚹ"));
  text.replace(QString("a"), QString("ᚨ"));
  text.replace(QString("e"), QString("ᛖ"));
  text.replace(QString("i"), QString("ᛁ"));
  text.replace(QString("o"), QString("ᛟ"));
  text.replace(QString("u"), QString("ᚢ"));
  text.replace(QString("."), QString("᛫"));//only one that's working.
  return text;
}
QString Runes::runictolatin(QString text){
  text.replace(QString("ᛈ"), QString("p"));
  text.replace(QString("ᛏ"), QString("t"));
  text.replace(QString("ᚲ"), QString("k"));
  text.replace(QString("ᛊ"), QString("s"));
  text.replace(QString("ᛗ"), QString("m"));
  text.replace(QString("ᚾ"), QString("n"));
  text.replace(QString("ᛚ"), QString("l"));
  text.replace(QString("ᛃ"), QString("j"));
  text.replace(QString("ᚹ"), QString("w"));
  text.replace(QString("ᚨ"), QString("a"));
  text.replace(QString("ᛖ"), QString("e"));
  text.replace(QString("ᛁ"), QString("i"));
  text.replace(QString("ᛟ"), QString("o"));
  text.replace(QString("ᚢ"), QString("u"));
  text.replace(QString("᛫"), QString("."));
  return text;
}

