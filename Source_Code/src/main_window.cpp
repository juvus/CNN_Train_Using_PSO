/**
 * ================================================================================
 * @file main_window.cpp
 * @author Dmitry Safonov (juvusoft@gmail.com)
 * @brief Definition of the MainWindow class methods. This is the main window of
 * the application.
 * @version 0.1
 * @date 2023-01-11
 * ================================================================================
 */

#include "include/main_window.h"

#include <QWidget>
#include <QCloseEvent>
#include "include/utils.h"

// Testing with picture
#include <QPicture>
#include <QPainter>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    initializeClassFields();
    initializeUI();
    initializeSignalSlotConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void
MainWindow::initializeClassFields()
{
    ui = nullptr;
    isMNISTDataLoaded = false;
    isSearchRunning = false;
    searchRunningTime = 0.0f;
    isSaveErrorValues = false;
    PSOAlg = nullptr;
}

void
MainWindow::initializeUI()
{
    ui = new (Ui::MainWindow);
    ui->setupUi(this);
    
    // Put default values to the PSO algorithm settings.
    


}

void
MainWindow::initializeSignalSlotConnections()
{
    connect(ui->pushButton, SIGNAL(clicked(bool)),
            this, SLOT(show_message()));     
}

void
MainWindow::closeEvent(QCloseEvent *event)
{
    QMainWindow::closeEvent(event);
}

void
MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
       painter.setPen(Qt::blue);
       painter.setFont(QFont("Arial", 30));
       painter.drawText(rect(), Qt::AlignCenter, "Qt");
}



void MainWindow::show_message()
{
    QMessageBox::information(this, "Some message", "Some message text");
}

