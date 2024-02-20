#include <stdio.h>
#include <ctype.h>
#include "sudoku.h"

int main() {

    getUserName();

    int sudoku[9][9] = {0};

//    puts("Fill the field with the numbers you want");
//    fillingFieldsWithNumbers(sudoku);

    printFields(sudoku);

    return 0;
}
