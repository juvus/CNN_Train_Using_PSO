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
#include <QFile>
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
    
    // Set additional styles to the window
    QFile styleSheetfile(":/res/stylesheet.qss");
    if (styleSheetfile.open(QFile::ReadOnly | QFile::Text))
    {
        QString styleSheet = QLatin1String(styleSheetfile.readAll());
        this->setStyleSheet(styleSheet);
        styleSheetfile.close();
    }







    //ui->groupBox->setStyleSheet("QGroupBox {border: 1px solid gray; margin-top: 3ex;}"
    //                            "QGroupBox::title {subcontrol-origin: margin; margin: 0px; subcontrol-position: top left; padding: 0 5px; background-color: transparent;}");


    //this->setStyleSheet("QGroupBox {border: 1px solid gray}");
    //this->setStyleSheet("QGroupBox {subcontrol-origin: margin; subcontrol-position: top center; padding: 0 3px; background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF0ECE, stop: 1 #FFFFFF);}");

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

