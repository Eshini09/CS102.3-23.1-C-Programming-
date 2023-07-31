#include <stdio.h>
int main()
{
     // 5.Input 02 numbers with decimals and display the average with decimals
    float n1,n2,avg;
    printf("Enter first number : ");
    scanf("%f",&n1);
    printf("Enter second number : ");
    scanf("%f",&n2);
    avg=(n1+n2)/2;
    printf("\nAverage is %.2f\n",avg);
}
