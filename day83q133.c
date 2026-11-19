/* Create an enum for months and print how many days each month has. */
#include<stdio.h>
int main(){
    enum Month{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
    int m;
    for(m=JAN;m<=DEC;m++){
        if(m==FEB)
            printf("%d = 28 days\n",m);
        else if(m==APR||m==JUN||m==SEP||m==NOV)
            printf("%d = 30 days\n",m);
        else
            printf("%d = 31 days\n",m);
    }
    return 0;
}