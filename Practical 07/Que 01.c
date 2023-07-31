#include <stdio.h>
int main()
{
    int mat1[3][3], mat2[3][3], matsum[3][3];
    printf("Enter values for the first matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }


    printf("Enter values for the second matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }


    printf("Matrix Sum:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matsum[i][j]);
        }
        printf("\n");
    }
}

