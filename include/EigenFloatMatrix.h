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
  
#define TYPE Float
#define Eigen_type float
#include "EigenMatrix_h"
#undef TYPE
#undef Eigen_type
  
#ifdef __cplusplus
}
#endif
