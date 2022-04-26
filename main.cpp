#include "runes.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    Runes w;//make main window object
    w.show();//render main window object
    return app.exec();
}
