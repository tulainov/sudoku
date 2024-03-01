#include <stdlib.h>
#include "setDifficulty.h"
#define SIZE 9
#define FIRST_LEVEL 17
#define SECOND_LEVEL 25
#define THIRD_LEVEL 36


void asterisksCover(int sudoku[SIZE][SIZE], int asterisksNumber) {


    int count = 0;
    while (count < asterisksNumber) {
        int row = rand() % SIZE;
        int col = rand() % SIZE;

        if (sudoku[row][col] != '*') {
            sudoku[row][col] = '*';
            count++;
        }
    }
}
//

void setDifficulty(int sudoku[SIZE][SIZE], int level) {

    fillSudoku(sudoku);

    switch (level) {
        case 1:
            asterisksCover(sudoku, FIRST_LEVEL);
            break;
        case 2:
            asterisksCover(sudoku, SECOND_LEVEL);
            break;
        case 3:
            asterisksCover(sudoku, THIRD_LEVEL);
            break;
        default:
            asterisksCover(sudoku, FIRST_LEVEL);
    }

}
