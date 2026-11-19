/* Write a program to check if a number is a strong number. */
#include<stdio.h>
int main(){
    int n,temp,d,i,fact,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        d=temp%10;
        fact=1;
        for(i=1;i<=d;i++)
            fact=fact*i;
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n)
        printf("Strong Number");
    else
        printf("Not a Strong Number");
    return 0;
}