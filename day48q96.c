/* Reverse each word in a sentence without changing the word order. */
#include<stdio.h>
int main(){
    char s[200],temp;
    int i=0,start=0,j,k;
    fgets(s,200,stdin);
    while(1){
        if(s[i]==' '||s[i]=='\n'||s[i]=='\0'){
            j=start;
            k=i-1;
            while(j<k){
                temp=s[j];
                s[j]=s[k];
                s[k]=temp;
                j++;
                k--;
            }
            start=i+1;
        }
        if(s[i]=='\0')
            break;
        i++;
    }
    printf("%s",s);
    return 0;
}