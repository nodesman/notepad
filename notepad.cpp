#include "notepad.h"
#include "mainwindow.h"
#include <QApplication>

Notepad::Notepad(QObject *parent) : QObject(parent)
{

}

void Notepad::run(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    a.exec();
}
