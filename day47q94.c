/* Find the longest word in a sentence. */
#include<stdio.h>
int main(){
    char s[200];
    int i=0,count=0,max=0,end=0,start,j;
    fgets(s,200,stdin);
    while(1){
        if(s[i]!=' '&&s[i]!='\n'&&s[i]!='\0')
            count++;
        else{
            if(count>max){
                max=count;
                end=i-1;
            }
            count=0;
        }
        if(s[i]=='\0')
            break;
        i++;
    }
    start=end-max+1;
    for(j=start;j<=end;j++)
        printf("%c",s[j]);
    return 0;
}