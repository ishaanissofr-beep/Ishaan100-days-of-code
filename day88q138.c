/* Print all enum names and integer values using a loop. */
#include<stdio.h>
int main(){
    enum Color{RED,GREEN,BLUE};
    char *name[]={"RED","GREEN","BLUE"};
    int i;
    for(i=RED;i<=BLUE;i++)
        printf("%s = %d\n",name[i],i);
    return 0;
}