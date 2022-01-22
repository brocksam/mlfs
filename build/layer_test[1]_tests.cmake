add_test( HelloTest.BasicAssertions /Users/sambrockie/Documents/Code/Repositories/mlfs/build/layer_test [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties( HelloTest.BasicAssertions PROPERTIES WORKING_DIRECTORY /Users/sambrockie/Documents/Code/Repositories/mlfs/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( layer_test_TESTS HelloTest.BasicAssertions)
