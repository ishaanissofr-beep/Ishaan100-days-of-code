/*wrtie a program to take a number as input and print its equivalent binary representation.*/
#include <stdio.h>
void main(){
    int x,R=0,N=0,reverse=0,digit;
    printf("what is ur number:");
    scanf("%d",&x);
    while (x!=0){
        R=x%2;
        N=N*10+R;
        x=x/2;
    }
    while (N!=0){
        digit=N%10;
        reverse=reverse * 10 + digit;
        N =N/10;
    }
    printf("%d",reverse);
}
