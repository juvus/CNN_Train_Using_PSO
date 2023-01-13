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

MainWindow::MainWindow()
{
    ui.setupUi(this);
    initializeUI();
}

void 
MainWindow::closeEvent(QCloseEvent *event)
{
    QMainWindow::closeEvent(event);
}

void
MainWindow::initializeUI()
{
    // Make the size of the window fixed
    int width = this->width();
    int height = this->height();
    setFixedSize(width, height);

    setWindowTitle("CNN Train Using PSO");
}

