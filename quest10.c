#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j,countOne,findRow=0,maxOne=0;
    printf("Enter 9 elements of matrix \n");
    for(i=0; i<=2; i++)
    {
        countOne=0;
        for(j=0; j<=2; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
            
                countOne++;
        }
            if(countOne>maxOne)
            {
                maxOne=countOne;
                findRow=i+1;
            }
        printf("\n");
    }
        
        if(findRow>0)
        
        printf("Row is %d",findRow);
        else
        printf("\n No.Row");
        
    
    return 0;
}