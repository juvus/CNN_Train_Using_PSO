/* 
================================================================================
Filename: main.cpp
Description: Main program file with entrance point. DrawingWindow class doesn't
    use widgets. ControlWindow class uses widgets and have all necessary 
    controls to generate different smoothing polygons.
================================================================================
*/

// Standard includes:
#include <QApplication>
#include <QWidget>

// Program includes:

int main(int argc, char **argv)
{
    // Create the application
    QApplication app(argc, argv);

    // Creating the main widget
    QWidget window;

    // Main widget settings
    window.resize(250, 150);
    window.setWindowTitle("Simple example");
    window.setToolTip("This is QWidget!");
    
	// Show the created window
	window.show();

    return (app.exec());
}
