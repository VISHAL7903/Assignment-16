#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,sum;
    printf("Enter the 9 element in first matrix ");
    for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
    {
        scanf("%d",&a[i][j]);
    }
        }
    for(i=0;i<=2;i++)
    {
        sum=0;
        for(j=0;j<=2;j++) 
       {
        sum=sum+a[i][j];
        
       }
        printf("Row is %d \n",sum);
    }   
    for(i=0;i<=2;i++)
    {
        sum=0;
       for(j=0;j<=2;j++)   
    {
        sum=sum+a[j][i];
    }
    printf("\n column is %d ",sum);
    }  
    return 0;

}