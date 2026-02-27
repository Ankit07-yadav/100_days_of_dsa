/*

Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers (first list)
- Third line: integer m
- Fourth line: m space-separated integers (second list)

Output:
- Print the merged linked list elements, space-separated

Example:
Input:
5
10 20 30 40 50
4
15 25 35 45

Output:
10 15 20 25 30 35 40 45 50

Explanation:
Compare nodes of both lists, append smaller to result, continue until all nodes are merged.

*/


#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void traverse(node *head);

node *merge(node *head1,node *head2);

int main()
{
    int m,n;
    printf("Enter the number of nodes for the first linked list");
    scanf("%d",&m);
    node *head1=NULL;
    node *temp1=NULL;
    node *newnode1=NULL;

    for(int i=0;i<m;i++)
    {
        newnode1=(node *)malloc(sizeof(node));
        printf("Enter the data in %d node of the first linked list",i+1);
        scanf("%d",&newnode1->data);
        newnode1->next=NULL;

        if(head1==NULL)
        {
            head1=newnode1;
            temp1=newnode1;
        }
        else
        {
            temp1->next=newnode1;
            temp1=newnode1;
        }
    }
    traverse(head1);

    printf("\n");

    printf("Enter the number of nodes for the second linked list");
    scanf("%d",&n);

    node *head2=NULL;
    node *temp2=NULL;
    node *newnode2=NULL;
    for(int i=0;i<n;i++)
    {
        newnode2=(node *)malloc(sizeof(node));
        printf("Enter the data in %d node of the Second linked list",i+1);
        scanf("%d",&newnode2->data);
        newnode2->next=NULL;

        if(head2==NULL)
        {
            head2=newnode2;
            temp2=newnode2;
        }
        else
        {
            temp2->next=newnode2;
            temp2=newnode2;
        }
    }
    traverse(head2);

    printf("\n");

    printf("The linked lists after merge sorting=\n");
    node *head=merge(head1,head2);
    traverse(head);
}


void traverse(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

node *merge(node *head1,node *head2)
{
    if(head1==NULL || head2==NULL)
    {
        return head1 == NULL?head2 : head1;
    }

    if(head1->data <= head2->data)
    {
        head1->next=merge(head1->next,head2);
        return head1;
    }
    else{
        head2->next=merge(head1,head2->next);
        return head2;
    }
}