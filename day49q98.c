/* Print initials of a name with the surname displayed in full. */
#include<stdio.h>
int main(){
    char s[100];
    int i=0,last=0;
    fgets(s,100,stdin);
    while(s[i]!='\0'&&s[i]!='\n'){
        if(s[i]==' ')
            last=i+1;
        i++;
    }
    i=0;
    while(i<last){
        if(i==0||s[i-1]==' ')
            printf("%c. ",s[i]);
        i++;
    }
    while(s[last]!='\0'&&s[last]!='\n'){
        printf("%c",s[last]);
        last++;
    }
    return 0;
}