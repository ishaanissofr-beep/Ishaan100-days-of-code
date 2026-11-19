/* Find the first repeating lowercase alphabet in a string. */
#include<stdio.h>
int main(){
    char s[100];
    int count[26]={0},i=0;
    fgets(s,100,stdin);
    while(s[i]!='\0'){
        if(s[i]>='a'&&s[i]<='z'){
            if(count[s[i]-'a']==1){
                printf("%c",s[i]);
                return 0;
            }
            count[s[i]-'a']++;
        }
        i++;
    }
    printf("-1");
    return 0;
}