//Roberto Antonio Fuentes Guardado 00062217

#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void){
  
    Matrix original_matrix,inverse_matrix;
    zeroes(original_matrix,3);

    original_matrix.at(0).at(0) = 2; original_matrix.at(0).at(1) = 2; original_matrix.at(0).at(2) = 3;
    original_matrix.at(1).at(0) = 4; original_matrix.at(1).at(1) = 5; original_matrix.at(1).at(2) = 6;
    original_matrix.at(2).at(0) = 7; original_matrix.at(2).at(1) = 8; original_matrix.at(2).at(2) = 9;

    //det 0
    /*
    original_matrix.at(0).at(0) = 0; original_matrix.at(0).at(1) = 0; original_matrix.at(0).at(2) = 0;
    original_matrix.at(1).at(0) = 0; original_matrix.at(1).at(1) = 0; original_matrix.at(1).at(2) = 0;
    original_matrix.at(2).at(0) = 0; original_matrix.at(2).at(1) = 0; original_matrix.at(2).at(2) = 0;
    */

    inverseMatrix(original_matrix,inverse_matrix);
   
    //Result
    showMatrix(inverse_matrix);

    return 0;
}

