#include <stdio.h>
int main()
{
    float r,cir,area,volume,pi=3.14;
    int choice;
    printf("1.Circumference\n");
    printf("2.Area\n");
    printf("3.Volume\n");
    printf("What is your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Enter the radius : ");
               scanf("%f",&r);
               cir=2.00*pi*r;
               printf("Circumference is %f",cir);
        case 2:printf("Enter the radius : ");
               scanf("%f",&r);
               area=pi*r*r;
               printf("Area is %f",area);
        case 3:printf("Enter the radius : ");
               scanf("%f",&r);
               volume=(4/3*pi*r*r*r);
               printf("Volume is %f",volume);

    }
}
