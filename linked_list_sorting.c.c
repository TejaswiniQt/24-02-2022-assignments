/*Program to sort a single linked list in decresing order*/

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

void sort_Linkedlist()
{
    slist *temp, *min, *ptr;
    int item;
    if(head==NULL)
    {
        printf("List isempty\n");
    }
    else
    {
        temp = head;
        while(temp->link != NULL)
        {
            min = temp;
            ptr = temp->link;
            while(ptr != NULL)
            {
                if(ptr->data > min->data)
                {
                    min = ptr;
                }
                ptr = ptr->link;
            }
            if(temp != min)
            {
                item = temp->data;
                temp->data = min->data;
                min->data = item;
            }
            temp = temp->link;
        }
    }
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
    printf("Before sorting:\n");
    display();
    sort_Linkedlist();
    printf("After sorting:\n");
    display();
    
    return 0;
}




