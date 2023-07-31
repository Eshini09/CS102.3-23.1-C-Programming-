#include <stdio.h>
int main()
{
    int num,r;
    printf("Enter a number : ");
    scanf("%d",&num);
    r=num%2;
    switch(r)
    {
        case 0:printf("%d is even",num);break;
        case 1:printf("%d is odd",num);break;
    }
}
