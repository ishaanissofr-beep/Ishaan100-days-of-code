/* Store multiple student records in a file and then read and display them. */
#include<stdio.h>
int main(){
    FILE *f;
    char name[50];
    int n,i,roll;
    float marks;
    scanf("%d",&n);
    f=fopen("students.txt","w");
    for(i=0;i<n;i++){
        scanf("%s %d %f",name,&roll,&marks);
        fprintf(f,"%s %d %.2f\n",name,roll,marks);
    }
    fclose(f);
    f=fopen("students.txt","r");
    while(fscanf(f,"%s %d %f",name,&roll,&marks)!=EOF)
        printf("%s %d %.2f\n",name,roll,marks);
    fclose(f);
    return 0;
}