add_test( LayerTest.BasicAssertions /Users/sambrockie/Documents/Code/Repositories/mlfs/build/tests/tests [==[--gtest_filter=LayerTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties( LayerTest.BasicAssertions PROPERTIES WORKING_DIRECTORY /Users/sambrockie/Documents/Code/Repositories/mlfs/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( tests_TESTS LayerTest.BasicAssertions)
