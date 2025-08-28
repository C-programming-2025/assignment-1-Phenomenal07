#include<stdio.h>
int main(){
    int num, result;
    printf("enter a number:");
    scanf("%d", &num); 
    result = (num > 0) && ((num / 2) * 2 == num);
    printf("%d", result);
    return 0;
}