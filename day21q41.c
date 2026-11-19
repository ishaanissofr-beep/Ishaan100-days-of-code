/* Write a program to swap the first and last digit of a number. */
#include<stdio.h>
int main(){
    int n,first,last,p=1,middle;
    scanf("%d",&n);
    last=n%10;
    while(n/p>=10)
        p=p*10;
    first=n/p;
    middle=(n%p)/10;
    n=last*p+middle*10+first;
    printf("%d",n);
    return 0;
}