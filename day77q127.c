/* Read text from input.txt, convert lowercase letters to uppercase, and write to output.txt. */
#include<stdio.h>
int main(){
    FILE *a,*b;
    char ch;
    a=fopen("input.txt","r");
    b=fopen("output.txt","w");
    while((ch=fgetc(a))!=EOF){
        if(ch>='a'&&ch<='z')
            ch=ch-32;
        fputc(ch,b);
    }
    fclose(a);
    fclose(b);
    return 0;
}