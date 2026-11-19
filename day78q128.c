/* Read a text file and count vowels and consonants. */
#include<stdio.h>
int main(){
    FILE *f;
    char ch;
    int vowels=0,consonants=0;
    f=fopen("input.txt","r");
    while((ch=fgetc(f))!=EOF){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowels++;
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            consonants++;
    }
    fclose(f);
    printf("Vowels = %d\nConsonants = %d",vowels,consonants);
    return 0;
}