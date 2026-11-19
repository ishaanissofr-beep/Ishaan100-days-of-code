/* Reverse a string. */
#include<stdio.h>
int main(){
    char s[100],temp;
    int i=0,j;
    fgets(s,100,stdin);
    while(s[i]!='\0'&&s[i]!='\n')
        i++;
    j=i-1;
    i=0;
    while(i<j){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    printf("%s",s);
    return 0;
}