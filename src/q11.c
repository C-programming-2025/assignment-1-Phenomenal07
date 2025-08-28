#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = (num + 1) * 3 - 10;
    printf("Result after operations: %d\n", num);
    return 0;
}