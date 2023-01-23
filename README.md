# Research project. CNN training using PSO algorithm
## Description
Network: Convolutional Neural Network (CNN);

Network task: Recognition of the hand written digits (MNIST database);

Network structure: [Input, 28x28x1] -> (Convolution 1, 5x5 kernel, n1 kernels) -> [n1 channels, 24x24xn1] -> (Max-Pooling, 2x2) -> [n1 channels, 12x12xn1] -> (Convolution 2, 5x5 kernel, n2 kernels) -> [(n1xn2) channels, 8x8x(n1xn2)] -> (Max-Pooling, 2x2) -> [(n1xn2) channels, 4x4x(n1xn2)] -> (flattening) -> (Fully-Connected NN, ReLU activation) -> [n3 hidden layer] -> (Fully-Connected NN, SoftMax) -> [Output layer, 10 neurons];

Learning algorithm: Particle Swarm Optimization (PSO);

Technologies: C++, Qt (for GUI), QCustomPlot (for plotting);

## Application GUI development

<p align="center">
<img src="/Images_for_GitHub/Application GUI. MNIST data loading.png" width=1075px>
</p>

**Fig.1.** Application GUI. MNIST data loading.

<p align="center">
<img src="/Images_for_GitHub/Application GUI. Settings.png" width=1075px>
</p>

**Fig.1.** Application GUI. Settings.

<p align="center">
<img src="/Images_for_GitHub/Application GUI. CNN Training.png" width=1075px>
</p>

**Fig.1.** Application GUI. CNN Training.

## Licence
Code in this project is available under the `GPLv3` license. You can find the license file here: [LICENSE](/LICENSE).