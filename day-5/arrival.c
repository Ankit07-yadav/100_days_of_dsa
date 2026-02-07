/*

Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70

Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    int *arr1;
    arr1=(int *)malloc(n*sizeof(int));

    printf("Enter the elements in array 1 \n");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("\nthe elements in array 1\n");
    for(int i=0; i<n;i++)
    {
        printf("%d ",arr1[i]);
    }  

    int m;
    printf("\nEnter the value of m\n");
    scanf("%d",&m);

    int *arr2;
    arr2=(int *)malloc(m*sizeof(int));

    printf("\nEnter the elements in array 2 \n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("\nThe array 2 elements are\n");
    for(int i=0;i<m;i++)
    {
        printf("%d ",arr2[i]);
    }

    int p=m+n;

    int *arr3;
    arr3=(int *)malloc(p*sizeof(int));

    for(int i=0; i<n; i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        arr3[n+i]=arr2[i];
    }
    for(int i = 0; i < p - 1; i++)
    {
    for(int j = i + 1; j < p; j++)
    {
        if(arr3[i] > arr3[j])
        {
            int temp = arr3[i];
            arr3[i] = arr3[j];
            arr3[j] = temp;
        }
    }
    }

    printf("\n sorted arrival time\n");

    for(int i=0;i<p;i++)
    {
        printf("%d ",arr3[i]);
    }

    free(arr1);
    free(arr2);
    free(arr3);
}