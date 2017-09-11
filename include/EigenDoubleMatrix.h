//
//  util.h
//  Mnist
//
//  Created by Kevin Quennesson on 6/23/17.
//
//

#pragma once

#ifdef __cplusplus
extern "C" {
#endif
  
#define TYPE Double
#define Eigen_type double
#include "EigenMatrix_h"
#undef TYPE
#undef Eigen_type
  
#ifdef __cplusplus
}
#endif
