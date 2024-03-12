#include <stdio.h>
#include "difficulty.h"
#include <stdbool.h>

int getDifficultyLevel() {

    int answer;
    bool falseInput = false;

    while (!falseInput) {
        printf("%s", "\nWhat difficulty level do you want to play? from 1 to 3: ");

        if (scanf_s("%d", &answer) != 1) {
            while(getchar() != '\n') {
                puts("Wrong input. Type please a number.\n");
           }
        }

        if (answer < 1 || answer > 3) {
            puts("Give the number from 1 to 3.");
        } else {
            falseInput = true;
        }
    }

    printf("\nLet's play! %d level\n", answer);
    return answer;
}