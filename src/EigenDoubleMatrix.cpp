//
//  util.h
//  Mnist
//
//  Created by Kevin Quennesson on 6/23/17.
//
//

#include "Eigen/Eigen"
#include "EigenCBindings.h"
#include "EigenDoubleMatrix.h"

using namespace Eigen;

extern "C" {
  
#define TYPE Double
#define Eigen_type double
#include "EigenMatrix_cpp"
#undef TYPE
#undef Eigen_type

}

