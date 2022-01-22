#ifndef __LAYER_CPP
#define __LAYER_CPP

#include <numeric>
#include <vector>

namespace mlfs {

double calc_output(std::vector<double> const& inputs, std::vector<double> const& weights, double bias) {
    double output = std::inner_product(inputs.begin(), inputs.end(), weights.begin(), bias);
    return output;
}

}  // namespace

#endif
