#ifndef __PRINT_CPP
#define __PRINT_CPP

#include <iostream>
#include <vector>

namespace mlfs {

void print_vector(std::vector<double> const& vec) {
    std::cout << "[";
    for (auto i : vec) {
        std::cout << i << ", ";
    }
    std::cout << "]\n";
}

}  // namespace

#endif
