#include <stdio.h>
int main()
{
    int c;
    float num,sum=0,avg;
    for(c=1;c<=10;c++)
        {
        printf("Enter number %d : ",c);
        scanf("%f",&num);
        sum+=num;
        }
    avg=sum/10;
    printf("Average is %.2f ",avg);
}
