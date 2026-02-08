/*

Problem: Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.

Input:
- Single integer n

Output:
- Print the n-th Fibonacci number

Example:
Input:
6

Output:
8

Explanation: Sequence: 0,1,1,2,3,5,8 at positions 0,1,2,3,4,5,6

*/
#include<stdio.h>

int fibo(int num);

int main()
{
    int n;
    printf("Enter a limit \n");
    scanf("%d",&n);
    int s=fibo(n);
    printf("\n%d",s);
}

int fibo(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    return fibo(num-1)+fibo(num-2);
}