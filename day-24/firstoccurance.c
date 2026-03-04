/*

Problem: Delete First Occurrence of a Key - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer key

Output:
- Print the linked list elements after deletion, space-separated

Example:
Input:
5
10 20 30 40 50
30

Output:
10 20 40 50

Explanation:
Traverse list, find first node with key, remove it by adjusting previous node's next pointer.

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void traverse(node *head);
node * firstoccur(node *head,int occdata);

int main()
{
    int n;
    printf("Enter the number of the node for linked list\n");
    scanf("%d",&n);
    node *head=NULL;
    node *temp=NULL;
    node *newnode=NULL;

    for(int i=0;i<n;i++)
    {
        newnode=(node *)malloc(sizeof(node));
        printf("\nEnter the data in the %d node",i+1);
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
    printf("The original linked list is=\n");
    traverse(head);
    int odata;
    printf("Enter the number whose fisrt occurence is to be deleted\n");
    scanf("%d",&odata);
    head=firstoccur(head,odata);
    printf("The linked list after deletion is=\n");
    traverse(head);
}

void traverse(node *head )
{
    node *temp = head;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

node *firstoccur(node *head, int occdata)
{
    if (head == NULL) return head;

    // If the head itself contains the key
    if (head->data == occdata)
    {
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    // Search for first occurrence in the rest of the list
    node *p = head;
    while (p->next != NULL && p->next->data != occdata)
    {
        p = p->next;
    }

    // If not found, just return original head
    if (p->next == NULL)
        return head;

    // Delete the node
    node *q = p->next;
    p->next = q->next;
    free(q);

    return head;
}