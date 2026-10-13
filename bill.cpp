/*/*program to calculate electric bill
Author:Mwaura Job Gathoga
Registration no:BCS-03-0134/2026
Descriotion:electric bill
Date:13/10/2026
*/
#include <stdio.h>

double calculateElectricBill(int units) {
    double bill = 0.0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }
    return bill;
}

int main(void) {
    int units;

    printf("Enter units consumed: ");
    scanf("%d", &units);
    printf("Total bill: KSh. %.2f\n", calculateElectricBill(units));

    return 0;
}