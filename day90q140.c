/* Define a struct with enum Gender and print person's gender. */
#include<stdio.h>
int main(){
    enum Gender{MALE,FEMALE};
    struct Person{
        char name[50];
        enum Gender gender;
    };
    struct Person p;
    int g;
    scanf("%s %d",p.name,&g);
    p.gender=g;
    printf("%s\n",p.name);
    if(p.gender==MALE)
        printf("Male");
    else
        printf("Female");
    return 0;
}