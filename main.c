#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void getUserName() {

    printf("Please enter your name:\n");

    char name[50];

    scanf_s("%s", name);

    printf("Welcome %s, let's play sudoku!\n", name);
}

void printFields(int sudokuField[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%c", sudokuField[i][j]);
        }

        printf("\n");
    }
}

int main() {

    getUserName();

    int sudoku[9][9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sudoku[i][j] = '*';
        }
    }

    printFields(sudoku);

    return 0;
}


