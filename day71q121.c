/* Create info.txt and write the user's name and age to the file using fprintf(). */
#include<stdio.h>
int main(){
    FILE *f;
    char name[50];
    int age;
    scanf("%s",name);
    scanf("%d",&age);
    f=fopen("info.txt","w");
    fprintf(f,"%s %d",name,age);
    fclose(f);
    printf("Data successfully saved");
    return 0;
}