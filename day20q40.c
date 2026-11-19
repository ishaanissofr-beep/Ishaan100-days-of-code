/* Write a program to find the 1's complement of a binary number and print it. */
#include<stdio.h>
int main(){
    int n,d,ans=0,p=1;
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        if(d==0)
            d=1;
        else
            d=0;
        ans=ans+d*p;
        p=p*10;
        n=n/10;
    }
    printf("%d",ans);
    return 0;
}