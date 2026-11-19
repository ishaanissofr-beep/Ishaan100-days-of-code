/*write a program to print all the factors of a given number.*/
#include <stdio.h>
void main(){
    int a,b,c=2,d,e,f;
    printf("WHAT IS UR NUMBER:");
    scanf("%d",&a);
    printf("1\n");
    while (a!=c){
        d=a%c;
        if (d==0)
            printf("%d\n",c);
        c++;
    } 
    printf("%d\n",a);
}

