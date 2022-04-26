#ifndef RUNES_H
#define RUNES_H

#include <QMainWindow>

namespace Ui{
  class Runes;
}

class Runes : public QMainWindow{
  Q_OBJECT

public:
  explicit Runes(QWidget *parent = 0);
  ~Runes();
  QString latintorunic(QString text);
  QString runictolatin(QString text);

private slots:
  void on_latintorunic_clicked();
  void on_runictolatin_clicked();

private:
  Ui::Runes *ui;
};

#endif // RUNES_H
