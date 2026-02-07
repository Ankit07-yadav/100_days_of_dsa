/*

Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the reversed array, space-separated

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays

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

    printf("Enter the elements in array \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("The array elements are \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", ptr[i]);
    }

    int mid=n/2;
    int mid_ele=ptr[mid];
    int temp=0;

    for(int i=0;i<n;i++)
    {
        temp=ptr[mid-i];
        ptr[mid-i]=ptr[mid+i];
        ptr[mid+i]=temp;
    }

    printf("\nreverse array \n");

    for(int i=0; i<n; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);
}