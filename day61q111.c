/* Find the first negative integer in each subarray of size k. */
#include<stdio.h>
int main(){
    int a[100],n,k,i,j,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<=n-k;i++){
        ans=0;
        for(j=i;j<i+k;j++){
            if(a[j]<0){
                ans=a[j];
                break;
            }
        }
        printf("%d ",ans);
    }
    return 0;
}