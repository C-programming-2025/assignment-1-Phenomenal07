/* Write a C program to convert temperature from Celsius to Fahrenheit. Prompt the user for a
temperature in Celsius and display the equivalent temperature in Fahrenheit.
(Formula: fahrenheit = (celsius * 9 / 5) + 32) */
#include <stdio.h>
int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %f\n", f);
    return 0;
}