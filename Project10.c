#include<stdio.h>
void main()
{
    int mat[3][3];
    int i,j,row,col,sum=0;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&row,&col);
    
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)

            {

                printf("Matrix [%d][%d]: ",i,j);

                    scanf("%d",&mat[i][j]);

            }

    }
 
    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }


    //To add diagonal elements
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
 
    printf("The sum of diagonal elements of the square matrix = %d\n",sum);
}
