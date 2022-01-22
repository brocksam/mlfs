#include <vector>

#include <gtest/gtest.h>

#include "mlfs.h"

TEST(LayerTest, BasicAssertions) {
    std::vector<double> inputs {1, 2, 3};
    std::vector<double> weights {0.2, 0.8, -0.5};
    double bias = 2.0;
    EXPECT_FLOAT_EQ(mlfs::calc_output(inputs, weights, bias), 2.3);
}
