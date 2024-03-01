#ifndef SUDOKUGENERATOR_SUDOKU_H
#define SUDOKUGENERATOR_SUDOKU_H
#define SIZE 9

void getUserName();
void printFields(int sudokuField[SIZE][SIZE]);
void addingNumberToField(int sudokuField[SIZE][SIZE]);
void fillSudoku(int sudoku[SIZE][SIZE]);
int getDifficultyLevel();
void setDifficulty(int sudoku[SIZE][SIZE], int level);

#endif //SUDOKUGENERATOR_SUDOKU_H
