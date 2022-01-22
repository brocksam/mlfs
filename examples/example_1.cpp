#include <iostream>
#include <vector>

#include "mlfs.h"

int main() {
    std::vector<double> inputs {1, 2, 3};
    std::vector<double> weights {0.2, 0.8, -0.5};
    double bias = 2.0;

    std::cout << "Inputs:  ";
    mlfs::print_vector(inputs);
    std::cout << "Weights: ";
    mlfs::print_vector(weights);
    std::cout << "Bias:    " << bias << "\n";

    double output = mlfs::calc_output(inputs, weights, bias);

    std::cout << "Output:  " << output << "\n";

    return 0;
}
