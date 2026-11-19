/*write a program to check if a number is an armstrong number.*/
#include <stdio.h>
void main(){
    int a,b,c=0,d,e;
    printf("Enter your number:");
    scanf("%d",&a);
    d=a;
    while (a!=0){
        b=a%10;
        c = c + b*b*b;
        a=a/10;
    }
    if (d==c)
        printf("UR NUMBER IS ARMSTRONG");
    else 
        printf("YOUR NUMBER IS NOT AN ARMSTRONG");
}   


