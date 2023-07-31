#include <stdio.h>
int main()
{
    int num;
    char x[10];
    printf("Enter any number : ");
    scanf("%d",&num);
    if(num>0)
        x=positive;
    else if(num<0)
        x=negative;
    else
        x=zero;
        printf("%d is x",num);
}
