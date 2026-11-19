/* Find the length of the longest substring without repeating characters. */
#include<stdio.h>
int main(){
    char s[100];
    int i,j,k,count,max=0,repeat;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        count=0;
        for(j=i;s[j]!='\0';j++){
            repeat=0;
            for(k=i;k<j;k++){
                if(s[k]==s[j])
                    repeat=1;
            }
            if(repeat)
                break;
            count++;
        }
        if(count>max)
            max=count;
    }
    printf("%d",max);
    return 0;
}