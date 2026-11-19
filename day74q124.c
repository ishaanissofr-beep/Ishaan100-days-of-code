/* Take source and destination filenames and copy the source file to the destination file. */
#include<stdio.h>
int main(){
    FILE *a,*b;
    char source[50],destination[50],ch;
    scanf("%s %s",source,destination);
    a=fopen(source,"r");
    b=fopen(destination,"w");
    while((ch=fgetc(a))!=EOF)
        fputc(ch,b);
    fclose(a);
    fclose(b);
    return 0;
}