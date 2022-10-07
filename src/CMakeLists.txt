add_library(saturn SHARED saturn.cpp)
add_library(titan SHARED titan.cpp)

target_include_directories(saturn PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(titan PUBLIC ${CMAKE_SOURCE_DIR}/include)

set_target_properties(saturn PROPERTIES PUBLIC_HEADER ${CMAKE_SOURCE_DIR}/include/saturn.h)

target_compile_options(saturn PRIVATE -Wall -Wextra -Wno-unused-variable -Werror)
target_compile_options(titan PRIVATE -Wall -Wextra -Wno-unused-variable -Werror)

set_target_properties(saturn titan PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(saturn titan PROPERTIES SOVERSION 1)