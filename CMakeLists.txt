cmake_minimum_required (VERSION 3.0)

project (EigenCBindings)
set (EigenCBindings_VERSION_MAJOR 1)
set (EigenCBindings_VERSION_MINOR 0)
enable_testing()

set (CMAKE_C_COMPILER, clang)
set (CMAKE_CXX_COMPILER, clang++)

configure_file (
  "${PROJECT_SOURCE_DIR}/EigenCBindingsConfig.h.in"
  "${PROJECT_BINARY_DIR}/EigenCBindingsConfig.h")

include_directories ("${PROJECT_BINARY_DIR}")

set(SOURCES EigenCBindings.cpp EigenMatrix_cpp EigenFloatMatrix.cpp EigenDoubleMatrix.cpp EigenIntMatrix.cpp)
set(HEADERS EigenCBindingsConfig.h EigenMatrix_h EigenCBindings.h EigenFloatMatrix.h EigenDoubleMatrix.h EigenIntMatrix.h Macros.h)

add_library(EigenCBindings SHARED ${SOURCES} ${HEADERS})
target_compile_features(EigenCBindings PUBLIC cxx_constexpr)

add_executable(EigenCBindingsTest EigenCBindingsTest.c)
target_link_libraries(EigenCBindingsTest EigenCBindings)

add_test(BasicTest EigenCBindingsTest float BasicTest)
