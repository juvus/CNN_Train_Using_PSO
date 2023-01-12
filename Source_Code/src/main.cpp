/* 
================================================================================
Filename: main.cpp
Description: Main program file with entrance point. DrawingWindow class doesn't
    use widgets. ControlWindow class uses widgets and have all necessary 
    controls to generate different smoothing polygons.
================================================================================
*/

#include <QApplication>
#include <QWidget>
#include <main_window.h>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    MainWindow main_window;
    main_window.show();

    return (app.exec());
}
