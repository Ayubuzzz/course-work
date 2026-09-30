/*Program to display a password system
Author:Mwaura Job Gathoga
Registration no:BCS-03-0134\2026
Description:password system
Date:30/09/2026
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%19s", password);

        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password. Try again.\n");
        }

    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");

    return 0;
}