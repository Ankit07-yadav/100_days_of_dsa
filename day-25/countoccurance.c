/*

Problem: Count Occurrences of an Element in Linked List - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n (number of nodes)
- Second line: n space-separated integers (linked list elements)
- Third line: integer key (element to be counted)

Output:
- Print the number of times the key appears in the linked list

Example:
Input:
6
10 20 30 20 40 20
20

Output:
3

Explanation:
Traverse the linked list from head to end. Each time a node's data matches the given key, increment a counter. After traversal, print the final count.

*/


#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void traverse(node * head);

int count(node * head,int key);

int main()
{
    int n;
    printf("Enter the number of nodes of the linked list\n");
    scanf("%d",&n);
    node *head=NULL;
    node *temp=NULL;
    node *newnode=NULL;

    for(int i=0;i<n;i++)
    {
        newnode=(node *)malloc(sizeof(node));
        printf("Enter the data in the %d node",i+1);
        scanf("%d",&newnode->data);
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

    printf("The linked list =\n");
    traverse(head);
    int cdata;
    printf("Enter the number whose frequency is to be count\n");
    scanf("%d",&cdata);
    int num=count(head,cdata);
    printf("the number of count for %d is %d",cdata,num);
}

void traverse(node * head)
{
    node * temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int count(node * head,int key)
{
    node * p=head;
    int freq=0;
    while(p!=NULL)
    {
        if(p->data==key)
        {
            freq=freq+1;
        }
        p=p->next;
    }
    return freq;
}