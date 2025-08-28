#include <stdio.h>
#include <math.h>
int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sqrt_num = (int)sqrt(num);
    result = (sqrt_num * sqrt_num == num);
    printf("%d", result);
    return 0;
}