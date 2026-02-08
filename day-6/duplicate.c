/*

Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

Input:
- First line: integer n
- Second line: n space-separated integers (sorted array)

Output:
- Print unique elements only, space-separated

Example:
Input:
6
1 1 2 2 3 3

Output:
1 2 3

Explanation: Keep first occurrence of each element: 1, 2, 3

*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    int *ptr;
    ptr=(int *)malloc(n*sizeof(int));

    printf("\nEnter the elements in array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("The elements in array are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");

    int uniqueCount = 0;
    
    if(n > 0)
    {
        uniqueCount = 1; 
        
        for(int i=1; i<n; i++)
        {
            if(ptr[i] != ptr[uniqueCount-1])
            {
                ptr[uniqueCount] = ptr[i];
                uniqueCount++;
            }
        }
    }

    printf("Unique elements are:\n");
    for(int i=0; i<uniqueCount; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");

    free(ptr);
    return 0;
}