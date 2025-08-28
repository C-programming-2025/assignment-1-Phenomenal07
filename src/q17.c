#include<stdio.h>
int main(){
    char ch;
    int result;
    printf("enter a character:");
    scanf("%c", &ch); 
    result = (ch >= 'A') && (ch <= 'Z');
    printf("%d", result);
    return 0;
}