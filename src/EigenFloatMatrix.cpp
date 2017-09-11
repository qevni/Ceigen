//
//  util.h
//  Mnist
//
//  Created by Kevin Quennesson on 6/23/17.
//
//

#include <limits.h>
#include "Eigen/Eigen"
#include "EigenCBindings.h"
#include "EigenFloatMatrix.h"

using namespace Eigen;

extern "C" {
  
#define TYPE Float
#define Eigen_type float
//#include "EigenMatrix_cpp"
static inline Matrix<Eigen_type, Dynamic, Dynamic>& cast(EigenTypeMatrixRef matrix) {
  return *static_cast<Matrix<Eigen_type, Dynamic, Dynamic>*>(matrix);
}

EigenTypeMatrixRef EigenTypeMatrix(Create)() {
  static_assert(sizeof(Index) == sizeof(size_t), "Eigen has incomptabible index type");
  return new Matrix<Eigen_type, Dynamic, Dynamic>();
}

void EigenTypeMatrix(Free)(EigenTypeMatrixRef matrix) {
  delete &cast(matrix);
}

void EigenTypeMatrix(Zero)(EigenTypeMatrixRef matrix) {
  cast(matrix).setZero();
}

void EigenTypeMatrix(Resize)(EigenTypeMatrixRef matrix, size_t rows, size_t cols) {
  cast(matrix).resize(rows, cols);
}
  
Eigen_type EigenTypeMatrix(Get)(EigenTypeMatrixRef matrix, size_t row, size_t col) {
  return cast(matrix)(row, col);
}

#undef TYPE
#undef Eigen_type

}

