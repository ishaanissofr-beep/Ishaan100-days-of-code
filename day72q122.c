/* Open info.txt and read its contents using fgets(). */
#include<stdio.h>
int main(){
    FILE *f;
    char s[200];
    f=fopen("info.txt","r");
    if(f==NULL)
        return 0;
    while(fgets(s,200,f)!=NULL)
        printf("%s",s);
    fclose(f);
    return 0;
}