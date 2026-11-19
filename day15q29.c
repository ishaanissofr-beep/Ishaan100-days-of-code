/*Write a program to calculate the factorial of a number.*/
#include <stdio.h>
void main (){
    int i,n,FAC=1;
    printf("n!,n=?");
    scanf("%d",&n);
    for ( i=1;i<=n;i++ )
    FAC = FAC * i ;
    printf("%d",FAC);
}