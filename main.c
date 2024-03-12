#include "sudoku.h"
#include <stdlib.h>


int main() {

    getUserName();

    int sudoku[9][9] = {0};
//    int hiddenSudoku[9][9] = {0};
    printFields(sudoku);

    fillSudoku(sudoku);

    int level = getDifficultyLevel();

    setDifficulty(sudoku, level);

    while (!checkIfSudokuIsDone(sudoku)) {

        printFields(sudoku);
    }
    return (EXIT_SUCCESS);
}
