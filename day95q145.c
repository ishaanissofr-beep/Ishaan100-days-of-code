/* Return a structure containing top student's details from a function. */
#include<stdio.h>
struct Student{
    char name[50];
    int roll;
    float marks;
};
struct Student top(struct Student s[],int n){
    int i,max=0;
    for(i=1;i<n;i++){
        if(s[i].marks>s[max].marks)
            max=i;
    }
    return s[max];
}
int main(){
    struct Student s[5],ans;
    int i;
    for(i=0;i<5;i++)
        scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].marks);
    ans=top(s,5);
    printf("%s %d %.2f",ans.name,ans.roll,ans.marks);
    return 0;
}