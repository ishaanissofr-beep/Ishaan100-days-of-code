/* Find and print the student with the highest marks. */
#include<stdio.h>
int main(){
    struct Student{
        char name[50];
        int roll;
        float marks;
    };
    struct Student s[5];
    int i,max=0;
    for(i=0;i<5;i++)
        scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].marks);
    for(i=1;i<5;i++){
        if(s[i].marks>s[max].marks)
            max=i;
    }
    printf("%s %d %.2f",s[max].name,s[max].roll,s[max].marks);
    return 0;
}