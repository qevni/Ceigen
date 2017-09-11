//
//  util.h
//  Mnist
//
//  Created by Kevin Quennesson on 6/23/17.
//
//

#include "Eigen/Eigen"
#include "EigenIntMatrix.h"
#include "EigenCBindings.h"

using namespace Eigen;

extern "C" {
  
#define TYPE Int
#define Eigen_type int
#include "EigenMatrix_cpp"
#undef TYPE
#undef Eigen_type

}

