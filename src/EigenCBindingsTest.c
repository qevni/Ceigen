//
//  EigenCBindingsTest.c
//  EigenCBindings
//
//  Created by Kevin Quennesson on 8/17/17.
//
//

#include <stdio.h>

#include <string.h>
#include "EigenCBindings.h"

#define TEST(EXPR) { int result = (EXPR); if (!result) return 1; }

int EigenFloatMatrixBasicTest() {
  EigenFloatMatrixRef matrix = EigenFloatMatrixCreate();
  EigenFloatMatrixResize(matrix, 16, 16);
  EigenFloatMatrixZero(matrix);
  TEST(EigenFloatMatrixGet(matrix, 0, 0) == 0.0f);
  EigenFloatMatrixFree(matrix);
  return 0;
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    return 1;
  } else {
    if (strcmp(argv[1], "float") == 0 && strcmp(argv[2], "BasicTest") == 0) {
      return EigenFloatMatrixBasicTest();
    }
  }
  return 1;
}
