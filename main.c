#include <stdio.h>
#include <ctype.h>
#include "sudoku.h"
#include <stdlib.h>

int main() {

    getUserName();

    int sudoku[9][9] = {0};

    fillSudoku(sudoku);
    printFields(sudoku);

    int level = getDifficultyLevel();

    setDifficulty(sudoku, level);
    printFields(sudoku);

    return (EXIT_SUCCESS);
}
