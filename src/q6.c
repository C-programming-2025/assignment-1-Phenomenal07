#include <stdio.h>
int main() {
    float l, w, a;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &w);
    a = l * w;
    printf("The area of the rectangle is: %f\n", a);
    return 0;
}