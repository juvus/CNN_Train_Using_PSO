/**
 * ================================================================================
 * @file include/pso_algorithm.h
 * @author Dmitry Safonov (juvusoft@gmail.com)
 * @brief Declaration of PSOAlgorithm class. It is designed for solving the 
 * optimization problem (searching in the multidimentional space) with the 
 * universal particle swarm optimization (PSO) algorithm.
 * @version 0.1
 * @date 2023-01-12
 * ================================================================================
 */

#ifndef CNN_PSO_PROJECT_PSO_ALGORITHM_H_
#define CNN_PSO_PROJECT_PSO_ALGORITHM_H_

#include "include/utils.h"

class ConvNeuralNetwork;
class MNISTData;

struct PSOInitParams
{
    //Searching algorithm settings.
    u32 nVar;  /**< Number of unknown (decision) variables. */
    f32 varMin;  /**< Lower bound of decision variables. */
    f32 varMax;  /**< Upper bound of decision variables. */
    bool isUsingIterLimit;  /**< Flag to show the usage of the iteration limit. */
    u32 iterLimit;  /**< Additional randomization of earch a-th particle in a swarm. */
    bool isUsingPrecLimit;  /**< Flag to show the usage of the precision limit. */
    f32 precLimit;  /**< PSO algorithm precision limit. */
    
    // Searching algorithm hyperparameters.
    u32 nPop;  /**< Swarm population size (number of searching particles). */
    f32 w;  /**< Current inertia coefficient. */
    f32 wDamp;  /**< Damping ratio of inertia coefficient. */
    f32 c1;  /**< Personal acceleration coefficient. */
    f32 c2;  /**< Social acceleration coefficient. */
    u32 a;  /**< Additional randomization of earch a-th particle in a swarm. */
    u32 b;  /**< Additional randomization of all particles every b-th iteration. */
};

struct PSOInitCallbackFunctions
{
    ConvNeuralNetwork *conv_neural_network;
    MNISTData *mnist_data;
    // Pointer to the form update function.
};

struct PSOSearchResult
{
    // Results
};


/**
 * @brief 
 */
class PSOAlgorithm
{
public:
    /**
     * @brief Construct a new PSOAlgorithm object.
     */
    PSOAlgorithm();

    /**
     * @brief Destroy the PSOAlgorithm object
     */
    ~PSOAlgorithm();

    /**
     * @brief Initialization of the PSO algorithm with set of search algorithm settings 
     * and hyperparameters.
     * @param 
     */

    void
    initializePSOAlgorithm(PSOInitParams &params, PSOInitCallbackFunctions &clb_fcns);
    
    void
    initializeCallbackClasses();


    f32 
    calculateCost(f32 *position);
    // 1. Decompose position into network params;
    // 2. Assign params to the net
    // 3. Calculate network quality for M % of the test images





private:
    
    
    
    
    
    
    
    
    
    
    
    
    // Searching algorithm settings.
    u32 nVar;  /**< Number of unknown (decision) variables. */ 
    f32 varMin;  /**< Lower bound of decision variables. */
    f32 varMax;  /**< Upper bound of decision variables. */
    bool isUsingIterLimit;  /**< Flag to show the usage of the iteration limit. */
    u32 iterLimit;  /**< PSO algorithm iteration limit. */
    bool isUsingPrecLimit; /**< Flag to show the usage of the precision limit. */
    f32 precLimit;  /**< PSO algorithm precision limit. */
    bool isDoSearch;  /**< Flag indicating the fact of searching work. */

    // Searching algorithm hyperparameters.
    u32 nPop;  /**< Swarm population size (number of searching particles). */
    f32 wInit;  /**< Initial inertia coefficient. */
    f32 w;  /**< Current inertia coefficient. */
    f32 wDamp;  /**< Damping ratio of inertia coefficient. */
    f32 c1;  /**< Personal acceleration coefficient. */
    f32 c2;  /**< Social acceleration coefficient. */
    u32 a;  /**< Additional randomization of earch a-th particle in a swarm. */
    u32 b;  /**< Additional randomization of all particles every b-th iteration. */

    // PSO algorithm working data.
    f32 **partsPositions;  /**< 2D array for holding current positions of particles. */
    f32 *position;  /**< Temp posiotion of the particle. */
    f32 **partsBestPositions; /**< 2D array for holding best positions of particles. */
    f32 **partsVelosities;  /**< 2D array for holding velosities of particles. */
    f32 *partsCosts; /**< 1D array for holding costs of particles. */
    f32 *partsBestCosts;  /**< 1D array for holding best costs of particles. */
    f32 r1;  /**< Parameter for holding random number (personal aceleration). */
    f32 r2;  /**< Parameter for holding random number (social aceleration). */

    // PSO algorithm working results.
    u32 iteration;  /**< Number of iterations used for searching. */
    f32 globalBestCost;  /**< Found best cost. */
    f32 *globalBestPosition;  /**< Found best position. */
    f32 *arrayBestCosts;  /**< Array with the cost values for every iteration (for the plot). */

    // Pointers to callback classes.
    ConvNeuralNetwork *conv_neural_network;
    MNISTData *mnist_data;


    // Misc fields.
    bool isInitialized;  /**< Flag showing the initialization of the algorithm. */
    

};

#endif  // CNN_PSO_PROJECT_PSO_ALGORITHM_H_
