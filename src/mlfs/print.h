#ifndef __PRINT_H
#define __PRINT_H

#include <vector>

namespace mlfs {

template<typename T>
void print_vector(std::vector<T> const& vec);

}  // namespace

#include "print.cpp"

#endif
