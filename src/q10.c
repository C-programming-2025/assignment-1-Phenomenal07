// Write a C program to swap the values of two variables using a temporary variable.
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    return 0;
}