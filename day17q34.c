/*write a program to check if a number is a prime.*/
#include <stdio.h>
void main(){
    int a,b=2,c,d,e,f;
    printf("what is ur number");
    scanf("%d",&a);
    while (a!=b){
        c=a%b;
        if (c==0){
            printf("UR NUMBER IS NOT PRIME");
            break;
        }
        b++;
    }
    if (a==b)
        printf("YOUR NUMEBER IS PRIME");
}