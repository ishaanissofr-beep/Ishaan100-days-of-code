/* Read a text file and count the total number of characters, words, and lines. */
#include<stdio.h>
int main(){
    FILE *f;
    char ch,prev=' ';
    int characters=0,words=0,lines=0;
    f=fopen("info.txt","r");
    while((ch=fgetc(f))!=EOF){
        characters++;
        if(ch=='\n')
            lines++;
        if(ch!=' '&&ch!='\n'&&(prev==' '||prev=='\n'))
            words++;
        prev=ch;
    }
    fclose(f);
    printf("Characters = %d\nWords = %d\nLines = %d",characters,words,lines);
    return 0;
}