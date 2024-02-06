#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: figure out how to fill fields with random numbers and make them unique for every column and line.

//function gets user's name
void getUserName() {

    printf("Please enter your name:\n");
    char name[50];

    scanf_s("%s", name);

    printf("Welcome %s, let's play sudoku!\n", name);

}

//function to print sudoku fields
void printFields(int sudokuField[9][9]) {

    int y = 1;

    printf("   ABC DEF GHI\n");

    for (int i = 0; i < 9; i++) {

        if ((i + 1) % 3 == 1 || i == 0) {
            printf("   --- --- ---\n");
        }

        printf("%d ",y++);

        for (int j = 0; j < 9; j++) {

            if ((j + 1) % 3 == 1 || j == 0) {
                printf("%c", '|');
            }

            printf("%c", sudokuField[i][j]);

            if (j == 8) {
                printf("%c", '|');
            }
        }

        printf("\n");
    }
}

// function to feel the fields with numbers
void fillingFieldsWithNumbers(int sudokuField[9][9]) {

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sudokuField[i][j] = '*';
        }
    }

    while (1) {
        printf("\nGive the 'x' (-1 to stop the loop): ");
        int x = 0;
        scanf_s("%d", &x);
        if (x == -1) break;

        printf("\nGive the 'y': ");
        int y = 0;
        scanf_s("%d", &y);

        printf("\nWhich value you want to give to this number (from 1 to 9):");
        int number = 0;
        scanf_s("%d", &number);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                sudokuField[x][y] = number + '0';
            }
        }
        printFields(sudokuField);


    }
}

int main() {

    getUserName();

    int sudoku[9][9];

    printf("Fill the field with the numbers you want. Simply give the coordinates.");

    fillingFieldsWithNumbers(sudoku);

    return 0;
}


//Question: how to get the name and surname?
//Question: exception handling in task 2 - 'which number you want to give'
//Question: create other C-files and add methods there? import statement?
//Question: make the numbers from 1 to 10