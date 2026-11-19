/* Search in a sorted array using binary search. */
#include<stdio.h>
int main(){
    int a[100],n,x,i,low=0,high,mid,pos=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==x){
            pos=mid;
            break;
        }
        else if(x<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    printf("%d",pos);
    return 0;
}