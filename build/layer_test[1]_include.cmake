if(EXISTS "/Users/sambrockie/Documents/Code/Repositories/mlfs/build/layer_test[1]_tests.cmake")
  include("/Users/sambrockie/Documents/Code/Repositories/mlfs/build/layer_test[1]_tests.cmake")
else()
  add_test(layer_test_NOT_BUILT layer_test_NOT_BUILT)
endif()