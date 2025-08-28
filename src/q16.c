#include<stdio.h>
int main(){
    int x, y;
    float average;
    printf("enter x and y:");
    scanf("%d %d", &x,&y); 
    average = (x + y) / 2;
    printf("average=%f", average);
    return 0;
}