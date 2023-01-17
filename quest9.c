#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j,count=0;
    printf("Enter 9 elements of matrix \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }   
            if(count>(i*j)/2)
            {
            printf("this is sp matrix");
            }
           else
            printf("not spark");
        
    
    return 0;
}