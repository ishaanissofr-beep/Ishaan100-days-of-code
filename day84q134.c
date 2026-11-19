/* Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly. */
#include<stdio.h>
int main(){
    enum Status{SUCCESS,FAILURE,TIMEOUT};
    enum Status s;
    int n;
    scanf("%d",&n);
    s=n;
    if(s==SUCCESS)
        printf("Success");
    else if(s==FAILURE)
        printf("Failure");
    else if(s==TIMEOUT)
        printf("Timeout");
    return 0;
}