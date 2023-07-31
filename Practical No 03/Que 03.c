#include <stdio.h>
int main()
{
    char name[20];
    float bs,ns,inc;
    printf("Enter employee name : ");
    scanf("%s",&name);
    printf("Enter the basic salary : ");
    scanf("%f",&bs);
    if(bs<5000.00)
        inc=(bs*0.1);
    else if(bs<10000.00)
            inc=(bs*0.15);
    else
        inc=(bs*1.5);
   ns=bs+inc;
    printf("New salary of %s is %.2f",name,ns);
}
