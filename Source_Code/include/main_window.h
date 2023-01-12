/**
 * ================================================================================
 * @file main_window.h
 * @author Dmitry Safonov (juvusoft@gmail.com)
 * @brief Declaration of the MainWindow class methods. This is the main window of
 * the application.
 * @version 0.1
 * @date 2023-01-11
 * ================================================================================
 */

#ifndef MAIN_WINDOW_H_
#define MAIN_WINDOW_H_

#include <QtWidgets/QMainWindow>

#ifdef _DEBUG
    #include "../build/debug/ui/ui_MainWindow.h"
#else
    #include "../build/release/ui/ui_MainWindow.h"
#endif

/**
 * @brief Class for the main window of the application.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

protected:
    /**
     * @brief Window close event handler.
     * @param event Close event.
     */
    void closeEvent(QCloseEvent *event) override;

private slots:

private:
    // Form of the main window.
    Ui::MainWindow ui;

    /**
     * @brief Initialization of the main window graphical user interface.
     */
    void initUI();
};

#endif  // MAIN_WINDOW_H_
