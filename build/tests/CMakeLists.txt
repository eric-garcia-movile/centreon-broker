##
## Copyright 2016 Centreon
##
## Licensed under the Apache License, Version 2.0 (the "License");
## you may not use this file except in compliance with the License.
## You may obtain a copy of the License at
##
##     http://www.apache.org/licenses/LICENSE-2.0
##
## Unless required by applicable law or agreed to in writing, software
## distributed under the License is distributed on an "AS IS" BASIS,
## WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
## See the License for the specific language governing permissions and
## limitations under the License.
##
## For more information : contact@centreon.com
##

# Tests directory.
set(TESTS_DIR "${PROJECT_SOURCE_DIR}/core/test")
add_subdirectory("googletest")

# Include directories.
include_directories("${PROJECT_SOURCE_DIR}/bam/inc")

# Unit test executable.
add_executable("ut"
  # Core sources.
  "${TESTS_DIR}/ceof/ceof_parser/parse.cc"
  "${TESTS_DIR}/exceptions/msg/default.cc"
  # Module sources.
  ${TESTS_SOURCES}
)
target_link_libraries("ut" "gtest" "gtest_main" ${TESTS_LIBRARIES} ${NEB} "rokerbase" "roker")
