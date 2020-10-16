#
# This file is open source software, licensed to you under the terms
# of the Apache License, Version 2.0 (the "License").  See the NOTICE file
# distributed with this work for additional information regarding copyright
# ownership.  You may not use this file except in compliance with the License.
#
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied.  See the License for the
# specific language governing permissions and limitations
# under the License.
#

#
# Copyright (C) 2018 Scylladb, Ltd.
#

# We would like to use `find_dependency`, but it is not supported properly until CMake 3.8.
#include (FindDependencyMacro)

list (APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR})

#
# Dependencies.
#

include (SeastarDependencies)
set (StdFilesystem_CXX_DIALECT "gnu++17")
seastar_find_dependencies ()

if (NOT TARGET Seastar::seastar)
  include ("${CMAKE_CURRENT_LIST_DIR}/SeastarTargets.cmake")
endif ()
