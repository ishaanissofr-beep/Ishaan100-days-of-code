/* Find the repeated element in an integer array. */
#include<stdio.h>
int main(){
    int a[100],count[1000]={0},n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(count[a[i]]==1){
            printf("%d",a[i]);
            return 0;
        }
        count[a[i]]++;
    }
    return 0;
}