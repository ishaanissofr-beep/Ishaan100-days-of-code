/* Print the maximum sum of all the subarrays of size k. */
#include<stdio.h>
int main(){
    int a[100],n,k,i,j,sum,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<=n-k;i++){
        sum=0;
        for(j=i;j<i+k;j++)
            sum=sum+a[j];
        if(i==0||sum>max)
            max=sum;
    }
    printf("%d",max);
    return 0;
}