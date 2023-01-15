/**
 * ================================================================================
 * @file include/main_window.h
 * @author Dmitry Safonov (juvusoft@gmail.com)
 * @brief Declaration of the MainWindow class. This class describes the behavior
 * of the main window of the application.
 * @version 0.1
 * @date 2023-01-11
 * ================================================================================
 */

#ifndef CNN_PSO_PROJECT_MAIN_WINDOW_H_
#define CNN_PSO_PROJECT_MAIN_WINDOW_H_

#include <QMainWindow>

#ifdef _DEBUG
    #include "../build/debug/ui/ui_MainWindow.h"
#else
    #include "../build/release/ui/ui_MainWindow.h"
#endif

/**
 * @brief Namespace for the graphical user interface (GUI).
 */
namespace Ui
{
    class MainWindow;
}

/**
 * @brief Class for the main window of the application.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    /**
     * @brief Window close event handler.
     * @param event Close event.
     */
    void closeEvent(QCloseEvent *event) override;

    void paintEvent(QPaintEvent *) override;


private slots:

    void show_message();



private:
    /**
     * @brief Initialization of the main window graphical user interface.
     */
    void
    initializeUI();

    /**
     * @brief Initialization of the signal-slot connections.
     */
    void
    initializeSignalSlotConnections();

    // Form of the main window.
    Ui::MainWindow *ui;
};

#endif  // CNN_PSO_PROJECT_MAIN_WINDOW_H_
