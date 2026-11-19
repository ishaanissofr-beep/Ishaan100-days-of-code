/*Write a program to reverse a given number.*/
#include <stdio.h>
void main(){
    int x,digit,reverse=0;
    printf("WHAT IS UR NUMBER:");
    scanf("%d",&x);
    while (x!=0){
        digit=x%10;
        reverse=reverse * 10 + digit;
        x =x/10;
    }
    printf("%d",reverse);
}