/*

Problem: Write a program to find the maximum and minimum values present in a given array of integers.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the maximum and minimum elements

Example:
Input:
6
3 5 1 9 2 8

Output:
Max: 9
Min: 1

*/


#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of the element in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("\nenter elements in the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe array is=\n");
    for(int  i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nMax=%d",max);
    printf("\nMin=%d",min);
}