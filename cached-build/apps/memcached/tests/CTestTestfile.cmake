# CMake generated Testfile for 
# Source directory: /home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/tests
# Build directory: /home/work/feeds-seastar/seastar-20.05/seastar/build/apps/memcached/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Seastar.app.memcached.memcached "/usr/local/bin/cmake" "--build" "/home/work/feeds-seastar/seastar-20.05/seastar/build" "--target" "app_memcached_test_memcached_run")
set_tests_properties(Seastar.app.memcached.memcached PROPERTIES  ENVIRONMENT "ASAN_OPTIONS=disable_coredump=0:abort_on_error=1" TIMEOUT "300" UBSAN_OPTIONS=halt_on_error=1:abort_on_error=1 "BOOST_TEST_CATCH_SYSTEM_ERRORS=no" _BACKTRACE_TRIPLES "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/tests/CMakeLists.txt;37;add_test;/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/tests/CMakeLists.txt;0;")
add_test(Seastar.app.memcached.ascii "/usr/local/bin/cmake" "--build" "/home/work/feeds-seastar/seastar-20.05/seastar/build" "--target" "app_memcached_test_ascii_run")
set_tests_properties(Seastar.app.memcached.ascii PROPERTIES  ENVIRONMENT "ASAN_OPTIONS=disable_coredump=0:abort_on_error=1" TIMEOUT "300" UBSAN_OPTIONS=halt_on_error=1:abort_on_error=1 "BOOST_TEST_CATCH_SYSTEM_ERRORS=no" _BACKTRACE_TRIPLES "/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/tests/CMakeLists.txt;70;add_test;/home/work/feeds-seastar/seastar-20.05/seastar/apps/memcached/tests/CMakeLists.txt;0;")
