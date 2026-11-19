/*Write a program to print the sum of the first n odd numbers.*/
#include <stdio.h>
void main(){
    int i,n,SUM=0;
    printf("HOW MANY NUMBERS DO U WANNA ADD:");
    scanf("%d",&n);
    for (i=1;i<2*n+1;i=i+2)
    SUM = SUM + i; 
    printf("%d",SUM);
}