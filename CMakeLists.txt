cmake_minimum_required(VERSION 3.26)
project(SudokuGenerator C)

set(CMAKE_C_STANDARD 17)

add_executable(SudokuGenerator main.c
        sudokuFiles/getUserName/getUserName.h
        sudokuFiles/getUserName/getUserName.c
        sudokuFiles/printFields/printFields.c
        sudokuFiles/printFields/printFields.h
        sudoku.h
        sudokuFiles/setValue/setValue.h
        sudokuFiles/setValue/settingValue.c
        sudokuFiles/randomNumbers/fillingWithRandomNums.h
        sudokuFiles/randomNumbers/fillingWithRandomNums.c
        sudokuFiles/getDifficulty/diffuculty.c
        sudokuFiles/getDifficulty/difficulty.h
        sudokuFiles/setDifficulty/setDifficulty.h
        sudokuFiles/setDifficulty/setDifficulty.c
        sudokuFiles/gameLogic/gameLogic.h
        sudokuFiles/gameLogic/gameLogic.c
)
