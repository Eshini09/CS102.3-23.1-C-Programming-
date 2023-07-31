#include <stdio.h>
int main()
{
    float avg,dist,time;
    printf("Enter the distance traveled in Meters : ");
    scanf("%f",&dist);
    printf("Enter the time taken in seconds : ");
    scanf("%f",&time);
    avg=(dist/time);
    printf("The average speed is %.2f m/s",avg);
}
