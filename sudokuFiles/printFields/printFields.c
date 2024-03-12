#include <stdio.h>
#include "printFields.h"


//function to print sudoku fields
void printFields(int sudokuField[9][9]) {
    int rowNum = 1;
    printf("   ABC DEF GHI\n");

    for (int i = 0; i < 9; i++) {
        if ((i + 1) % 3 == 1 || i == 0) {
            printf("   --- --- ---\n");
        }

        printf("%d ", rowNum++);
        for (int j = 0; j < 9; j++) {
            if ((j + 1) % 3 == 1 || j == 0) {
                printf("|");
            }
            if (sudokuField[i][j] == 0) {
                printf("%d", 0); // Print asterisk for hidden cells
            } else {
                printf("%d", sudokuField[i][j]); // Print number for visible cells
            }
            if (j == 8) {
                printf("|");
            }
        }
        printf("\n");
    }
}

// in integer fields not * but 0, when 0 in field,  then *, or number