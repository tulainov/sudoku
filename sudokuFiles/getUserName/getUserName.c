#include <stdio.h>
#include "getUserName.h"

//function gets user's name
void getUserName() {

    printf("Please enter your name:\n");
    char name[50];

    scanf_s("%s", name);

    printf("\nWelcome %s, let's play sudoku!\n", name);

}


