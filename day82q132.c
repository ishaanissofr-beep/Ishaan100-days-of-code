/* Define an enum for traffic lights and print Stop, Wait, or Go based on its value. */
#include<stdio.h>
int main(){
    enum Light{RED,YELLOW,GREEN};
    enum Light light;
    int n;
    scanf("%d",&n);
    light=n;
    if(light==RED)
        printf("Stop");
    else if(light==YELLOW)
        printf("Wait");
    else if(light==GREEN)
        printf("Go");
    return 0;
}