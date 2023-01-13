/**
 * ================================================================================
 * @file main.cpp
 * @author Dmitry Safonov (juvusoft@gmail.com)
 * @brief Entry point of the application. Application is designed for testing the
 * ability of particle swarm optimization algorithm (PSO) to train a convolutional
 * neural network (CNN) for solving MNIST digits recognition problem.
 * @version 0.1
 * @date 2023-01-11
 * ================================================================================
 */

#include <QApplication>
#include <QWidget>
#include <include/main_window.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Main window of the application.
    MainWindow main_window;
    main_window.show();

    return (app.exec());
}
