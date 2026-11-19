/* Check if two strings are anagrams of each other. */
#include<stdio.h>
int main(){
    char a[100],b[100];
    int count[256]={0},i=0;
    scanf("%s",a);
    scanf("%s",b);
    while(a[i]!='\0'){
        count[a[i]]++;
        i++;
    }
    i=0;
    while(b[i]!='\0'){
        count[b[i]]--;
        i++;
    }
    for(i=0;i<256;i++){
        if(count[i]!=0){
            printf("Not Anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;
}