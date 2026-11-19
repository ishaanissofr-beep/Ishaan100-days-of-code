/*write a program to find the HCF (GCD) of two numbers*/
#include <stdio.h>
void main(){
    int a,b,c,d,e,f;
    printf("what are ur numbers");
    scanf("%d %d",&a,&b);
    d=1;
    while (d<b && d<a){
        if (a%d==0 && b%d==0){
            e=1*d;}
        d++;
    }
    printf("%d",e);
}
    