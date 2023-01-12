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

#include <main_window.h>

#include <QWidget>
#include <QCloseEvent>

MainWindow::MainWindow()
{
    ui.setupUi(this);
    this->initUI();
}

void 
MainWindow::closeEvent(QCloseEvent *event)
{
    event->accept();
}

void
MainWindow::initUI()
{
    // Make the size of the window fixed
    int width = this->width();
    int height = this->height();
    this->setFixedSize(width, height);

    this->setWindowTitle("CNN Train Using PSO");
}

