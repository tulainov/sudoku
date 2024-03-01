#include <ctype.h>
#include <stdio.h>
#include "../../sudoku.h"

// function to check user's input
int checkingLetter(char letter) {
    switch (toupper(letter)) {
        case 'A':
            return 0;
        case 'B':
            return 1;
        case 'C':
            return 2;
        case 'D':
            return 3;
        case 'E':
            return 4;
        case 'F':
            return 5;
        case 'G':
            return 6;
        case 'H':
            return 7;
        case 'I':
            return 8;
        default: return -1;
    }
}


int transportingLineNum(int number) {

    number = number - 1;
    return number;
}

// function to feel the fields with numbers
void addingNumberToField(int sudokuField[9][9]) {

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sudokuField[i][j] = '*';
        }
    }

    while (1) {

        puts("Give the letter from A to I (Q to stop the loop): ");
        char letter = 0;
        scanf_s(" %c", &letter);

        if (letter == 'Q' || letter == 'q') break;

        int x = checkingLetter(letter);

        if (x == -1) {
            puts("Wrong value, please try again");
            continue;
        }

        puts("Give the number of the line (from 1 to 9): ");
        int y = 0;
        scanf_s(" %d", &y);

        int lineNum = transportingLineNum(y);

        if (lineNum < 0 || lineNum > 8) {
            puts("Wrong line value, try again");
            continue;
        }

        puts("Which value you want to give to this number (from 1 to 9):");
        int number = 0;
        scanf_s(" %d", &number);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                sudokuField[x][y] = number + '0';
            }
        }
        printFields(sudokuField);

    }
}