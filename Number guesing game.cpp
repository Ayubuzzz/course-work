/*Program to display a Number guessing game
Author:Mwaura Job Gathoga
Registration no:BCS-03-0134/2026
Description:number guessing game
Date:30/09/2026
*/
 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(NULL));

    secret = (rand() % 20) + 1;

    while (guess != secret) {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        }
        else if (guess < secret) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations!\n");
        }
    }

    printf("Total attempts: %d\n", attempts);

    return 0;
}