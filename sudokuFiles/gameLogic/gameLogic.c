#include <stdio.h>
#include <stdbool.h>

#define SIZE 9


int isRowValid(int sudoku[SIZE][SIZE], int row) {
    int seen[10] = {0}; // Initialize an array to keep track of seen numbers (1-9)
    for (int i = 0; i < 9; i++) {
        int num = sudoku[row][i];
        if (num != 0 && seen[num]) {
            return 0; // Duplicate number found in row
        }
        seen[num] = 1;
    }
    return 1; // Row is valid
}

int isColumnValid(int sudoku[SIZE][SIZE], int col) {
    int seen[10] = {0}; // Initialize an array to keep track of seen numbers (1-9)
    for (int i = 0; i < 9; i++) {
        int num = sudoku[i][col];
        if (num != 0 && seen[num]) {
            return 0; // Duplicate number found in column
        }
        seen[num] = 1;
    }
    return 1; // Column is valid
}

int isSubgridValid(int sudoku[SIZE][SIZE], int startRow, int startCol) {
    int seen[10] = {0}; // Initialize an array to keep track of seen numbers (1-9)
    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            int num = sudoku[i][j];
            if (num != 0 && seen[num]) {
                return 0; // Duplicate number found in subgrid
            }
            seen[num] = 1;
        }
    }
    return 1; // Subgrid is valid
}

int isSudokuValid(int sudoku[SIZE][SIZE]) {
    // Check each row, column, and subgrid for validity
    for (int i = 0; i < 9; i++) {
        if (!isRowValid(sudoku, i) || !isColumnValid(sudoku, i)) {
            return 0; // Row or column is invalid
        }
    }
    // Check each 3x3 subgrid for validity
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            if (!isSubgridValid(sudoku, i, j)) {
                return 0; // Subgrid is invalid
            }
        }
    }
    return 1; // Sudoku grid is valid
}


bool checkIfSudokuIsDone(int sudoku[SIZE][SIZE]) {

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (sudoku[i][j] == 0 || !isSudokuValid(sudoku)) {
                return false; // Sudoku is not done
            }
        }
    }
    printf("Congratulations! You have completed the Sudoku.\n");
    return true; // Sudoku is done
}