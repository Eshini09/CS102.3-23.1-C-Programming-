#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 02 integers : ");
    scanf("%d %d",&num1,&num2);
    if(num1%num2==0)
        printf("\n%d is a multiple of %d\n",num1,num2);
    else
        printf("\n%d is not a multiple of %d\n",num1,num2);
}
