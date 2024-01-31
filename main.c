#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: figure out how to fill fields with random numbers and make them unique for every column and line.

void getUserName() {

    printf("Please enter your name:\n");

    char name[50];

    scanf_s("%s", name);

    printf("Welcome %s, let's play sudoku!\n", name);
}

void printFields(int sudokuField[9][9]) {
    int y = 1;
    // find the algorithm for printing letters
    printf("  A B C D E F G H I \n");
    printf("  -----------------  \n");
    for (int i = 0; i < 9; i++) {


//      TODO:   ADD '---' between every field, except the last one.

        printf("%d ",y++);

        for (int j = 0; j < 9; j++) {

            if ((j + 1) % 3 == 1 || j == 0) {
                printf("%c", '|');
            }
            printf(" %c ", sudokuField[i][j]);

            if (j == 8) {
                printf("%c", '|');
            }
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


