/*Passing 2D-Array
  Write a program to fill a square matrix with 
  value zero on the diagonals, 1 on the upper 
  right triangle, and –1 on the lower left triangle.
  Example:-
-----------  0	1  1  1
			-1  0  1  1
			-1 -1  0  1
            -1 -1 -1  0
*/

#include <stdio.h>
#include <conio.h>
void read_matrix(int mat[5][5], int);
void display_matrix(int mat[5][5], int);
int main()
{
 	int row;
	int mat1[5][5];
	printf("\n Enter the number of rows and columns of the matrix:");
	scanf("%d", &row);
	read_matrix(mat1, row);
	display_matrix(mat1, row);
	return 0;
}
void read_matrix(int mat[5][5], int r)
{
 	int i, j;
	for(i=0; i<r; i++)
	{
 	  	for(j=0; j<r; j++)
 		{
 		    if(i==j)
				mat[i][j] = 0;
			else if(i>j)
			 mat[i][j] = -1;
			else
 				mat[i][j] = 1;
	    }
    }
}

void display_matrix(int mat[5][5], int r)
{
    int i, j;
	for(i=0; i<r; i++)
	{	printf("\n");
		for(j=0; j<r; j++)
 		{
		    printf("\t %d", mat[i][j]);
		}
    }
}
