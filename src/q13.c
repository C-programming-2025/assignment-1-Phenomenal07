#include<stdio.h>
int main(){
    int num, result;
    printf("enter a number:");
    scanf("%d", &num); 
    result = ((num / 2) * 2 == num) && ((num / 3) * 3 == num);
    printf("%d", result);
    return 0;
}