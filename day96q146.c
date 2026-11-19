/* Create Employee structure with nested Date structure for joining date and print details. */
#include<stdio.h>
int main(){
    struct Date{
        int day,month,year;
    };
    struct Employee{
        char name[50];
        int id;
        struct Date joining;
    };
    struct Employee e;
    scanf("%s %d",e.name,&e.id);
    scanf("%d %d %d",&e.joining.day,&e.joining.month,&e.joining.year);
    printf("%s %d\n",e.name,e.id);
    printf("%d/%d/%d",e.joining.day,e.joining.month,e.joining.year);
    return 0;
}
