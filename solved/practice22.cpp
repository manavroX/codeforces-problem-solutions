#include <stdio.h>
#include <stdlib.h>

int RowMin(int *prow, int c);

int main()
{
    int a[10][10];
    int r, c, min;
    int i = 0, j = 0;

    printf("Enter number of rows & columns of array:\n");
         scanf("%d %d", &r, &c);

    printf("\nEnter elements of 2-D array:\n");
         for(i=0; i<r; i++)
         {
                  for(j=0; j<c; j++)
                  {
                           scanf("%d", &a[i][j]);
                  }
         }
    for(i=0;i<r;i++)
    {
        min = RowMin(a[i], c);
        printf("The min in row %d is %d\n",i, min);
    }
    return 0;
}

 int RowMin(int *prow, int ncols)
    {
        int min=prow[0], i;
        for(i=0; i<ncols; i++)
        {
            if(min > prow[i])
            {
                min = prow[i];
            }
        }
        return min;
    }
