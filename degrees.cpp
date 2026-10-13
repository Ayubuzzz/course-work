/*
Program to convert temperature from Fahrenheit to Celsius
Author: Mwaura Job Gathoga
Registration no: BCS-03-0134/2026
Description: Week 5 Activity - Q3: convertToCelsius()
Date: 13/10/2026
*/
#include <stdio.h>

double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main(void) {
    double fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    printf("Temperature in Celsius: %.1f\n", convertToCelsius(fahrenheit));

    return 0;
}