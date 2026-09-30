/* for a while loop for atm withdrawls
Author:Mwaura Job Gathoga
Regitration no:BCS-03-0134/2026
Description:While loop for Atm withdrawls
Date:30/09/2026
*/
#include <stdio.h>

int main() {
    float balance, withdrawal;

    printf("Enter account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        balance = balance - withdrawal;

        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Account balance is zero or negative.\n");

    return 0;
}