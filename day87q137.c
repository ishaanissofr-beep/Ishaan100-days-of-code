/* Create an enum for user roles and display messages based on role. */
#include<stdio.h>
int main(){
    enum Role{ADMIN,USER,GUEST};
    enum Role role;
    int n;
    scanf("%d",&n);
    role=n;
    if(role==ADMIN)
        printf("Admin");
    else if(role==USER)
        printf("User");
    else if(role==GUEST)
        printf("Guest");
    return 0;
}