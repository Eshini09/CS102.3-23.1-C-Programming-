#include <stdio.h>
int main()
{
    // 2.Eenter three integer numbers, and then tell the user the largest value
and smallest value among the three numbers
    int num1,num2,num3,min,max;
    printf("Enter 03 numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    max=num1;
    if(num2>max)
        max=num2;
    if(num3>max)
        max=num3;
    printf("The highest number is %d\n",max);
    min=num1;
    if(num2<min)
        min=num2;
    if(num3<min)
        min=num3;
    printf("The smallest number is %d",min);
}
