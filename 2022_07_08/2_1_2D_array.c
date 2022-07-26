// program to find sum, product, minimum & maximum of all elements in 2D array

#include <stdio.h>

#define MAXROW		10
#define MAXCOL		10

int main()
{
	int matrix[MAXROW][MAXCOL];
	int i,j,r,c;
	int sum,product, min, max;
	
	printf("Enter number of Rows(<%d) :", MAXROW);
	scanf("%d",&r);
	printf("Enter number of Cols(<%d) :", MAXCOL);
	scanf("%d",&c);

	printf("\nEnter matrix elements :\n");
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}

	/*sum and product of all elements*/
	/*initializing sun and product variables*/
	sum	= 0;
	product	= 1;
    min = matrix[0][0];
    max = matrix[0][0];
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			sum		+=	matrix[i][j];
			product	*=	matrix[i][j];
            if( matrix[i][j] > max )
                max = matrix[i][j];
            if( matrix[i][j] < min )
                min = matrix[i][j];
		}
	
	}

	printf("\nSUM of all elements : %d", sum);
    printf("\nProduct of all elements :%d", product);
    printf("\nMaximum of all elements :%d", max);
    printf("\nMinimum of all elements :%d", min);

	return 0;	
}