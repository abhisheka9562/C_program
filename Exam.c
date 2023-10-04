#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node head,new,temp;
struct node head=NULL;
int data;
void add(struct node* head,int data)
{
   new=(struct node*)malloc(sizeof(struct node));
   new->data=data;
    if(head==NULL)
    {
      head=new;
      head->next=NULL;
    }
    else
    {
       temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
        new->next=NULL;

    }
}
void display()
{
    if(head==NULL)
     printf("Empty");
    else
    {
      temp=head;
      while(temp->next!=NULL)
      {
        printf("\t",temp->data);
        temp=temp->next;
      }
    }
}
void main()
{
    int ch;
    while(1)
    {
    printf("\nEnter choice\n1)Add\n2)Display\n3)Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Enter element to add");
               scanf("%d",&data);
               add(head,data);
               break;
        
        case 2:display();
               break;
        case 3:exit(0);
        default:printf("Enter valid choice");
    }
    }
}