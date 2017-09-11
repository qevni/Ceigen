//
//  Macros.h
//  EigenCBindings
//
//  Created by Kevin Quennesson on 8/20/17.
//

#define _CONCAT(TYPE, SUFFIX) Eigen##TYPE##Matrix##SUFFIX
#define _FUNCTION_NAME(NAME, TYPE) _CONCAT(TYPE, NAME)
#define _MATRIX_NAME(TYPE) _CONCAT(TYPE, Ref)

#define EigenTypeMatrix(NAME) _FUNCTION_NAME(NAME, TYPE)
#define EigenTypeMatrixRef _MATRIX_NAME(TYPE)
