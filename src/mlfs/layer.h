#ifndef __LAYER_H
#define __LAYER_H

#include <vector>

namespace mlfs {

double calc_output(std::vector<double> const&, std::vector<double> const&, double);

}  // namespace

#include "layer.cpp"

#endif
