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
  
#define TYPE Int
#define Eigen_type int
#include "EigenMatrix_h"
#undef TYPE
#undef Eigen_type
  
#ifdef __cplusplus
}
#endif
