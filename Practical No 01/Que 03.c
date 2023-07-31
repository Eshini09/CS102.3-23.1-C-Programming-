#include <stdio.h>
int main()
{
     // 3.Input values for int,float,double and char and display value of each variable
    int year;
    float height;
    double dec;
    char name[15];
    printf("Enter your birth year : ");
    scanf("%d",&year);
    printf("Enter your height in meters : ");
    scanf("%f",&height);
    printf("Enter a decimal number : ");
    scanf("%lf",&dec);
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("\nBirth year is %d\n",year);
    printf("Height is %.2f m\n",height);
    printf("Decimal number is %lf\n",dec);
    printf("Name is %s\n\n",name);
}
