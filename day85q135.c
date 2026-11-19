/* Assign explicit enum values starting from 10 and print them. */
#include<stdio.h>
int main(){
    enum Numbers{A=10,B=11,C=12,D=13};
    printf("%d %d %d %d",A,B,C,D);
    return 0;
}