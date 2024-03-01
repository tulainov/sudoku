#include "../../sudoku.h"


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

//    -1 to show that row/col is not found
    int row = -1;
    int col = -1;
    int isEmpty = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (sudoku[i][j] == 0) {
                row = i;
                col = j;
                isEmpty = 1;
                break;
            }
        }
        if (isEmpty) {
            break;
        }
    }

    if (!isEmpty) {
        return 1;
    }

    for (int num = 1; num <= 9; num++) {
        if (checkTheNumber(sudoku, row, col, num)) {
            sudoku[row][col] = num;

            if (fillingWithRandomNumbers(sudoku)) {
                return 1;
            }

            sudoku[row][col] = 0;
        }
    }


    return 0;
}

void fillSudoku(int sudoku[9][9]) {

    fillingWithRandomNumbers(sudoku);
}
