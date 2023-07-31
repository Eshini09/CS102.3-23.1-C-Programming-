#include <stdio.h>
int main()
{
    // 1.Input two numbers and display the highest number
    int num1,num2,max;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
        max=num1;
    else
        max=num2;
    printf("The highest number is %d",max);
}
