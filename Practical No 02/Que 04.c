#include <stdio.h>
int main()
{
    float fah,cel;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f",&fah);
    cel=(5.0/9.0)*(fah-32);
    printf("Temperature in Celsius : %.2f",cel);
}
