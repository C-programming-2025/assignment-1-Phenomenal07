#include <stdio.h>
int main() {
    char name[20];
    printf("Enter your name: ");
    scanf(name, "%s");
    printf("Hello, %s! Welcome to C programming!\n", name);
    return 0;
}