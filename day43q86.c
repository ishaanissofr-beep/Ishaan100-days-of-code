/* Check if a string is a palindrome. */
#include<stdio.h>
int main(){
    char s[100];
    int i=0,j,flag=1;
    fgets(s,100,stdin);
    while(s[i]!='\0'&&s[i]!='\n')
        i++;
    j=i-1;
    i=0;
    while(i<j){
        if(s[i]!=s[j])
            flag=0;
        i++;
        j--;
    }
    if(flag==1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}