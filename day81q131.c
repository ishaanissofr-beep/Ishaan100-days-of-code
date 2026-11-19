/* Create an enumeration for days and print each day with its integer value. */
#include<stdio.h>
int main(){
    enum Days{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
    char *days[]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
    int i;
    for(i=SUNDAY;i<=SATURDAY;i++)
        printf("%s = %d\n",days[i],i);
    return 0;
}