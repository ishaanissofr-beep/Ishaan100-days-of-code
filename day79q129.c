/* Read integers from numbers.txt and print their sum and average. */
#include<stdio.h>
int main(){
    FILE *f;
    int n,sum=0,count=0;
    f=fopen("numbers.txt","r");
    while(fscanf(f,"%d",&n)!=EOF){
        sum=sum+n;
        count++;
    }
    fclose(f);
    printf("Sum = %d\nAverage = %.2f",sum,(float)sum/count);
    return 0;
}