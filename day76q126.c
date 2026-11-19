/* Ask for a filename, check if it exists, and display its content. */
#include<stdio.h>
int main(){
    FILE *f;
    char name[50],ch;
    scanf("%s",name);
    f=fopen(name,"r");
    if(f==NULL){
        printf("File does not exist");
        return 0;
    }
    while((ch=fgetc(f))!=EOF)
        printf("%c",ch);
    fclose(f);
    return 0;
}