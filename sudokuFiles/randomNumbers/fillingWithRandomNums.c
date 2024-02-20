#include <stdlib.h>
#include <stdio.h>
#include "../../sudoku.h"

// TODO: backtracking algorithm

int checkTheNumber(int sudoku[9][9], int row, int col, int num) {

    for (int i = 0; i < 9; i++) {
        if (sudoku[row][i] == num || sudoku[i][col] == num) {
            return 0;
        }
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (sudoku[i + startRow][j + startCol] == num) {
                return 0;
            }
        }
    }
    return 1;
}

int fillingWithRandomNumbers(int sudoku[9][9]) {



    return 0;
}


void fillSudoku(int sudoku[9][9]) {
}
