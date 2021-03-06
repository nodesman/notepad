#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->centralWidget()->layout()->setContentsMargins(0,0,0,0);
    this->statusBar()->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

