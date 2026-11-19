/* Open an existing file in append mode and append a new line of text. */
#include<stdio.h>
int main(){
    FILE *f;
    char s[200];
    f=fopen("info.txt","a");
    fgets(s,200,stdin);
    fprintf(f,"%s",s);
    fclose(f);
    return 0;
}