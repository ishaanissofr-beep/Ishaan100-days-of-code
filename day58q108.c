/* Print an array answer such that answer[i] is the product of all elements except nums[i]. */
#include<stdio.h>
int main(){
    int a[100],ans[100],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        ans[i]=1;
        for(j=0;j<n;j++){
            if(i!=j)
                ans[i]=ans[i]*a[j];
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",ans[i]);
    return 0;
}