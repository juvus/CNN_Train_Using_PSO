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
#include "include/pso_algorithm.h"
#include "include/utils.h"


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
     * @brief Initilaization of the class fields with default values.
     */
    void
    initializeClassFields();
    
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

    Ui::MainWindow *ui;  /**< Form of the main window. */

    bool isMNISTDataLoaded;  /**< Flag showing if MNIST data data loaded or not. */
    bool isSearchRunning;  /**< Flag showing if search is running or not. */
    f32 searchRunningTime;  /**< Search running time in seconds. */
    bool isSaveErrorValues;  /**< Flag to save RMSE values into array. */
    PSOAlgorithm *PSOAlg;  /**< Pointer to the PSO algorithm object. */
    



};

#endif  // CNN_PSO_PROJECT_MAIN_WINDOW_H_
