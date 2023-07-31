#include <stdio.h>
int main()
{
    int num,sum=0,r,p;
    printf("Enter a number : ");
    scanf("%d",&num);
    do
    {
        r=num%10;

        num=num/10;
    }
    while(num>0);
    printf("Sum is %d",sum);
}
