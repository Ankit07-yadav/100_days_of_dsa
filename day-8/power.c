/*

Problem: Given integers a and b, compute a^b using recursion without using pow() function.

Input:
- Two space-separated integers a and b

Output:
- Print a raised to power b

Example:
Input:
2 5

Output:
32

Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32

*/


#include<stdio.h>

int power(int a, int b);

int main()
{   
    int base;
    int raise;
    printf("enter a base number\n");
    scanf("%d",&base);
    printf("\nEnter the power number \n");
    scanf("%d",&raise);
    int c=power(base,raise);
    printf("%d",c);
}

int power(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        int pow=a*power(a,b-1);
        return pow;
    }
}