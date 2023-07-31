#include <stdio.h>
int main()
{
    int array[10];
    int i;
    float avg;
    for(i=0;i<10;i++)
    {
        printf("Enter a value for the element %d : ",i+1);
        scanf("%d",&array[i]);
    }

    int min=array[0];
    for(i=1;i<=10;i++)
    {
        if(array[i]<min)
            min=array[i];
    }

    int max=array[0];
    for(i=1;i<10;i++)
    {
        if(array[i]>max)
            max=array[i];
    }

    int sum=0;
    for(i=0;i<=10;i++)
        sum+=array[i];
    avg=(float)sum/10;


    int rev[10];
    for(i=0;i<=10;i++)
        rev[i]=array[9-i];

    printf("\nMinimum value is : %d",min);
    printf("\nMaximum value is : %d",max);
    printf("\nAverage value is : %.2f",avg);
    printf("\nReversed order is : ");
        for(i=0;i<10;i++)
            printf("%d",rev[i]);
        printf("\n");
}
