/* Merge two sorted arrays such that the merged array is also sorted. */
#include<stdio.h>
int main(){
    int a[100],b[100],m,n,i=0,j=0;
    scanf("%d",&m);
    for(int k=0;k<m;k++)
        scanf("%d",&a[k]);
    scanf("%d",&n);
    for(int k=0;k<n;k++)
        scanf("%d",&b[k]);
    while(i<m&&j<n){
        if(a[i]<b[j])
            printf("%d ",a[i++]);
        else
            printf("%d ",b[j++]);
    }
    while(i<m)
        printf("%d ",a[i++]);
    while(j<n)
        printf("%d ",b[j++]);
    return 0;
}