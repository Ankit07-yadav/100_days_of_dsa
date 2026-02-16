/*

Problem: Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

Input:
- First line: integer n representing number of rows and columns
- Next n lines: n integers each representing the matrix elements

Output:
- Print "Identity Matrix" if the matrix satisfies the condition
- Otherwise, print "Not an Identity Matrix"

Example:
Input:
3
1 0 0
0 1 0
0 0 1

Output:
Identity Matrix

*/


#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter the value in m and n\n");
    scanf("%d %d",&m,&n);
    int mat[m][n];

    printf("\nEnter the elements in the matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }

    int iden=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(((i==j)&&(mat[i][j]==1)) || ((i!=j)&&(mat[i][j]==0)))
            {
                iden=1;
            }
            else
            {
                iden=0;
                break;
            }                
        }
    }

    if(iden==1)
    {
        printf("\nIDENTITY MATRIX");
    }
    else
    {
        printf("\nNOT A IDENTITY MATRIX");
    }
}