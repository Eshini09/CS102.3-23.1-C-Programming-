#include <stdio.h>
int main()
{
    int bs,ns,inc;
    char name[15];
    printf("Enter employee name : ");
    scanf("%s",&name);
    printf("Enter basic salary : ");
    scanf("%d",&bs);
    if(bs<5000)
        inc=5;
    else if(10000>bs>=5000)
        inc=10;
    else
        inc=15;
    ns=bs+(bs*inc/100);
    printf("The new salary of %s is %d",name,ns);
}
