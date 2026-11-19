/*write a program to check if a number is a palindrome.*/
#include <stdio.h>
void main(){
    int x,digit,reverse=0,N;
    printf("WHAT IS UR NUMBER:");
    scanf("%d",&x);
    N=x;
    while (x!=0){
        digit=x%10;
        reverse=reverse * 10 + digit;
        x =x/10;
    }
    if (N==reverse)
        printf("NUMBER IS PALINDROME");
    else 
        printf("NUMBER IS NOT A PALINDROME");
}
    