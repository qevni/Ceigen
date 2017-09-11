//
//  EigenCBindings.cpp
//  EigenCBindings
//
//  Created by Kevin Quennesson on 8/16/17.
//
//

#include <math.h>

#include "Eigen/Eigen"
#include "EigenCBindings.h"

using namespace Eigen;

template <typename ValueType>
struct _EigenMatrix {
  Matrix<ValueType, Dynamic, Dynamic> matrix;
};

//struct EigenMatrix {
//  EigenValueType value_type;
//  union {
//    MatrixXi* integer_valued;
//    MatrixXf* float_valued;
//    MatrixXd* double_valued;
//  } matrix;
//
//  template<void(EigenMatrix::*Function)(MATRIX&)>
//  void call() {
//    switch (value_type) {
//      case EigenValueIntType:
//        return (this->*Function<MatrixXi>)(matrix.integer_valued);
////      case EigenValueFloatType:
////        return (this->*Function)(matrix.float_valued);
////      case EigenValueDoubleType:
////        return (this->*Function)(matrix.double_valued);
//      default:
//        assert(false);
//    }
//  }
//  void Test() {
//
//  }
//  template <typename MATRIX>
//  void Free(const MATRIX& matrix) {
//    delete matrix;
//  }
//};

template struct _EigenMatrix<int>;
template struct _EigenMatrix<float>;
template struct _EigenMatrix<double>;

extern "C" {

  
}
