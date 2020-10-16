#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Seastar::seastar" for configuration "Release"
set_property(TARGET Seastar::seastar APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Seastar::seastar PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libseastar.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS Seastar::seastar )
list(APPEND _IMPORT_CHECK_FILES_FOR_Seastar::seastar "${_IMPORT_PREFIX}/lib64/libseastar.a" )

# Import target "Seastar::seastar_testing" for configuration "Release"
set_property(TARGET Seastar::seastar_testing APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Seastar::seastar_testing PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libseastar_testing.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS Seastar::seastar_testing )
list(APPEND _IMPORT_CHECK_FILES_FOR_Seastar::seastar_testing "${_IMPORT_PREFIX}/lib64/libseastar_testing.a" )

# Import target "Seastar::seastar_perf_testing" for configuration "Release"
set_property(TARGET Seastar::seastar_perf_testing APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Seastar::seastar_perf_testing PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libseastar_perf_testing.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS Seastar::seastar_perf_testing )
list(APPEND _IMPORT_CHECK_FILES_FOR_Seastar::seastar_perf_testing "${_IMPORT_PREFIX}/lib64/libseastar_perf_testing.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
