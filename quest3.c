#include<stdio.h>
int main()
{
    int a[3][3],c[3][3];
    int i,j;
    printf("Enter the 9 element in first matrix ");
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<=2;i++)
    {
       for(j=0;j<=2;j++) 
       {
        c[i][j]=a[j][i];
        printf("%d ",c[i][j]);
       }
       printf("\n ");
    }
    return 0;

}