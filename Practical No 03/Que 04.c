#include <stdio.h>
int main()
{
    float dia,cir,area,rad,pi;
    printf("Enter the radius : ");
    scanf("%f",&rad);
    pi=3.14159;
    dia=rad*2;
    printf("\nDiameter is %.2f",dia);
    cir=(2*pi*rad);
    printf("\nCircumference is %.2f",cir);
    area=(pi*rad*rad);
    printf("\nArea is %.2f\n",area);
}
