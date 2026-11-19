/* Find the digit that occurs the most times in an integer number. */
#include<stdio.h>
int main(){
    int n,d,i,max=0,ans=0,count[10]={0};
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        count[d]++;
        n=n/10;
    }
    for(i=0;i<10;i++){
        if(count[i]>max){
            max=count[i];
            ans=i;
        }
    }
    printf("%d",ans);
    return 0;
}