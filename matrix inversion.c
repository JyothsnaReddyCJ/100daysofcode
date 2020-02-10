#include <stdio.h>
int main() 
{
	int rows,columns,i,j,matrix[100][100];
	printf("Enter the no.of rows and columns:");
	scanf("%d %d",&rows,&columns);
	printf("Enter matrix elements: ");
	for (i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
int temp;
	for (i = 0; i < rows; i++)
        {
        	for (j = i + 1; j < columns; j++)
        	{
            	temp = matrix[i][j];
            	matrix[i][j] = matrix[j][i];
            	matrix[j][i] = temp;
        	}
    	}

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns/2; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][columns - 1 - j];
            matrix[i][columns - 1 - j] = temp;
        }
    }



	for (i = 0; i < columns; i++)
    {
        for (j = 0; j < columns; j++)
            printf("%d ", matrix[i][j]);

        printf("\n");
    }
    printf("\n");
return 0;
}






