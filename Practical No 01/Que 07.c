#include <stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Before swap - \nEnter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\nAfter swap - \nFirst number is %d ",num1);
    printf("\nSecond number is %d \n",num2);
}
