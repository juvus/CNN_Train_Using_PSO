# Research project. CNN training using PSO algorithm
## Description
Network: Convolutional Neural Network (CNN)

Network task: Recognition of the hand written digits (MNIST database)

Network structure: [Input, 28x28x1] -> (Convolution 1, 5x5 kernel, n1 kernels) -> [n1 channels, 24x24xn1] -> (Max-Pooling, 2x2) -> [n1 channels, 12x12xn1] -> (Convolution 2, 5x5 kernel, n2 kernels) -> [(n1xn2) channels, 8x8x(n1xn2)] -> (Max-Pooling, 2x2) -> [(n1xn2) channels, 4x4x(n1xn2)] -> (flattening) -> (Fully-Connected NN, ReLU activation) -> [n3 hidden layer] -> (Fully-Connected NN, SoftMax) -> [Output layer, 9 neurons].

Learning algorithm: Particle Swarm Optimization (PSO)

Technologies: C++, Qt (for GUI)

## Licence
Code in this project is available under the `GPLv3` license. You can find the license file here: [LICENSE](/LICENSE)