#ifndef __MATRIX_H
#define __MATRIX_H

#include <vector>

namespace la
{

template <typename T> class Matrix
{
    private:
        std::vector<std::vector<T> > m_mat;
        unsigned int m_num_rows;
        unsigned int m_num_cols;

    public:
        // Constructors
        Matrix(unsigned int num_rows, unsigned int num_cols, const T& initial);

        // Destructor
        virtual ~Matrix();

        // Display
        std::string to_string (void);
};

}

#include "matrix.cpp"

#endif
