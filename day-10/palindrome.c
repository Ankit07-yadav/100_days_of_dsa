/*

Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    printf("Enter a string \n");
    scanf("%s", s);
    int l=strlen(s);

    int left=0;
    int right=l-1;
    int ispalin=1;

    while(left<right)
    {
        if(s[left]!=s[right])
        {
            ispalin=0;
            break;
        }
        left++;
        right--;
    }

    if(ispalin==1)
    {
        printf("\nPALINDROME ");
    }
    else
    {
        printf("\nNOT A PALINDROME ");
    }
}