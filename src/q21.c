#include <stdio.h>
int main() {
    int x, y, z, temp;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("After swap: \nx = %d\ny = %d\nz = %d\n", x, y, z);
    return 0;
}