#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j;
    printf("Enter 9 elements of matrix \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<=2; i++)
    {
        printf("\n");
        for (j = 0; j <=2; j++)
        { 
            if(i>=j)
            printf("%d ",a[i][j]);
           else
           printf("0 ");
        }
    }
    return 0;
}