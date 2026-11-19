/*Write a program to print the product of even numbers from 1 to n.*/
#include <stdio.h>
void main(){
    int a,b,c=1;
    printf("TILL HOW MANY VALUES DO U WANNA MULTIPLY:");
    scanf("%d",&a);
    for (b=2;b<=a;b=b+2)
    c = c * b;
    printf("%d",c);
}


