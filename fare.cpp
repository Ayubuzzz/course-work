/*
Program to calculate fare
Author: Mwaura Job Gathoga
Registration no: BCS-03-0134/2026
Description: Week 5 Activity 
Date: 13/10/2026
*/
#include <stdio.h>

double calculateFare(double distance) {
    return distance * 50;
}

int main(void) {
    double distance;

    printf("Enter distance (km): ");
    scanf("%lf", &distance);
    printf("Total fare: KSh. %.2f\n", calculateFare(distance));

    return 0;
}