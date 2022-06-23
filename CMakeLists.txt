cmake_minimum_required(VERSION 3.16)
project(
        crimson
        VERSION 1.0
        LANGUAGES C CXX
        )

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic")
set(CMAKE_C_FLAGS_DEBUG "-g ${CMAKE_C_FLAGS}")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME} ${SOURCE_LIST})
target_include_directories(${PROJECT_NAME} PUBLIC
        include
        )
target_sources(${PROJECT_NAME} PRIVATE
        "src/crimson.c"
        "src/cn_sort.c"
        "src/cn_utils.c"
        "src/cn_list.c"
        "src/cn_str.c"
        "src/cn_log.c"
        )

enable_testing()

add_test(NAME crimson_test COMMAND crimson)