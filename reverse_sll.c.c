/**Reverse a single linked list*/

#include<stdio.h>
#include<stdlib.h>

#define NO_NODES 5

typedef struct node
{
    int data;
    struct node *link;
}slist;

slist *head=NULL;


void insert(int data)
{
    slist *new=(slist *)malloc(sizeof(slist));
    if(new==NULL)
    {
        printf("Memory isnot allocated\n");
    }
    else
    {
        new->data=data;
        new->link=NULL;
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        slist *temp = head;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new;
    }
  }
}

void display()
{
    slist *temp=head;
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}


void reverse()
{
    slist *prevnode, *currentnode, *nextnode;
    prevnode = NULL;
    currentnode = nextnode = head;
    
    while(nextnode != NULL)
    {
        nextnode = nextnode->link;
        currentnode->link = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}


int main()
{
    int data,i=0;
    while(i++<NO_NODES)
    {
    printf("Enter the data:");
    scanf("%d",&data);
    insert(data);
    }
    printf("Before reversing the linked list\n");
    display();
    reverse();
    printf("After reversing the linked list\n");
    display();
    
    return 0;
}






