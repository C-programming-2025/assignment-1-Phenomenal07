#include <stdio.h>
int main() {
    int a, b, c, result;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    result = (a == b) && (b != c);
    printf("%d", result);
    return 0;
}