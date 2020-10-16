# Install script for directory: /home/work/feeds-seastar/seastar-20.05/seastar

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/work/feeds-seastar/seastar-20.05/seastar/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/work/feeds-seastar/seastar-20.05/seastar/build/gen/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/work/feeds-seastar/seastar-20.05/seastar/scripts/seastar-json2code.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE STATIC_LIBRARY FILES "/home/work/feeds-seastar/seastar-20.05/seastar/build/libseastar.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE STATIC_LIBRARY FILES "/home/work/feeds-seastar/seastar-20.05/seastar/build/libseastar_testing.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE STATIC_LIBRARY FILES "/home/work/feeds-seastar/seastar-20.05/seastar/build/libseastar_perf_testing.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/Seastar/SeastarTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/Seastar/SeastarTargets.cmake"
         "/home/work/feeds-seastar/seastar-20.05/seastar/build/CMakeFiles/Export/lib64/cmake/Seastar/SeastarTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/Seastar/SeastarTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/Seastar/SeastarTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/Seastar" TYPE FILE FILES "/home/work/feeds-seastar/seastar-20.05/seastar/build/CMakeFiles/Export/lib64/cmake/Seastar/SeastarTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/Seastar" TYPE FILE FILES "/home/work/feeds-seastar/seastar-20.05/seastar/build/CMakeFiles/Export/lib64/cmake/Seastar/SeastarTargets-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/Seastar" TYPE FILE FILES
    "/home/work/feeds-seastar/seastar-20.05/seastar/build/SeastarConfig.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/build/SeastarConfigVersion.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/Seastar" TYPE FILE FILES
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/FindConcepts.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/FindGnuTLS.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/FindLinuxMembarrier.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/FindProtobuf.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/FindSanitizers.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/FindStdAtomic.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/FindStdFilesystem.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/Findc-ares.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/Findcryptopp.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/Finddpdk.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/Findhwloc.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/Findlksctp-tools.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/Findlz4.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/Findnumactl.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/Findragel.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/Findrt.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/Findyaml-cpp.cmake"
    "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/SeastarDependencies.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/Seastar" TYPE DIRECTORY FILES "/home/work/feeds-seastar/seastar-20.05/seastar/cmake/code_tests")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/pkgconfig" TYPE FILE RENAME "seastar.pc" FILES "/home/work/feeds-seastar/seastar-20.05/seastar/build/seastar-install.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/pkgconfig" TYPE FILE RENAME "seastar-testing.pc" FILES "/home/work/feeds-seastar/seastar-20.05/seastar/build/seastar-testing-install.pc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/work/feeds-seastar/seastar-20.05/seastar/build/tests/cmake_install.cmake")
  include("/home/work/feeds-seastar/seastar-20.05/seastar/build/demos/cmake_install.cmake")
  include("/home/work/feeds-seastar/seastar-20.05/seastar/build/doc/cmake_install.cmake")
  include("/home/work/feeds-seastar/seastar-20.05/seastar/build/apps/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/work/feeds-seastar/seastar-20.05/seastar/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
