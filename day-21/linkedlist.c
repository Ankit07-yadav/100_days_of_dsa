/*

Problem: Create and Traverse Singly Linked List

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the result

Example:
Input:
5
10 20 30 40 50

Output:
10 20 30 40 50

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void traverse(node *head);

int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    node *head = NULL;
    node *temp=NULL;
    node *newnode=NULL;
    for(int i=0;i<n;i++)
    {
        newnode=(node *)malloc(sizeof(node));
        printf("Enter the data for the node %d: ", i+1);
        scanf("%d", &newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    traverse(head);
}

void traverse(node * head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
}