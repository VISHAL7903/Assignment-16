#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j, sum = 0;
    printf("Enter elements in matrix of size \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<=2; i++)
    { 
        for(j=0;j<=2;j++)
        {
            if(i==j)
            sum = sum + a[i][j];
        }
    }

    printf("\nSum of main diagonal elements = %d", sum);

    return 0;
}