#include <stdio.h>
int main() {
    int a, b, c;
    int sum;
    printf("enter three different numbers:");
    scanf("%d %d %d", &a, &b, &c); 
    sum = (a * a) + (b * b) + (c * c);
    printf("sum of squares=%d", sum);
    return 0;
}