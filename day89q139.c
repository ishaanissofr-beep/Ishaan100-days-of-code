/* Show that enums store integers by printing assigned values. */
#include<stdio.h>
int main(){
    enum Number{A=5,B=10,C=15};
    printf("%d %d %d",A,B,C);
    return 0;
}