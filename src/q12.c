// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.
#include <stdio.h>
int main() {
    int a, b, c, result;
    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);
    result = (a > b) && (b > c) && (c != 0);
    printf("Result: %d\n", result);
    return 0;
}