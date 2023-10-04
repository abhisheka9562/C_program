#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
int item;
struct node *head,*temp,*new,*prev;
void infront()
{
  new=(struct node *)malloc(sizeof(struct node));
  printf("Enter element");
  scanf("%d",&item);
  new->data=item;
  new->next=head;
  head=new;
 }
void inend()
{
 new=(struct node *)malloc(sizeof(struct node));
  printf("Enter element");
  scanf("%d",&item);
  new->data=item;
  temp=head;
  while(temp->next!=NULL)
  {
 temp=temp->next;
}
new->next=NULL;
temp->next=new;
}
void inpos()
{
  int count=1,pos,i=1;
     temp=head;
      while(temp->next!=NULL)
  {
 temp=temp->next;
 count++;
}
 printf("Enter position");
 scanf("%d",&pos);
 if(pos>count)
  printf("Not possible");
 else{
  new=(struct node *)malloc(sizeof(struct node));
  printf("Enter element");
  scanf("%d",&item);
  new->data=item;
  temp=head;
  while(i<pos-1)
   { temp=temp->next;
	  i++;
	}
  new->next=temp->next;
  temp->next=new;
}
}
void defront()
{
 temp=head;
 head=head->next;
 free(temp);
}
void deend()
{
 temp=head;
 while(temp->next!=NULL)
 { prev=temp;
	 temp=temp->next;}
 free(temp);
 prev->next=NULL;
}
void depos()
{
  int count=1,pos,i=1;
     temp=head;
      while(temp->next!=NULL)
  {
 temp=temp->next;
 count++;
}
 printf("Enter position");
 scanf("%d",&pos);
 
 if(pos>count)
  printf("Not possible");
 else{
	  while(i<pos)
	  {
	   prev=temp;
	   temp=temp->next;
	   i++;
	  }
	  prev->next=temp->next;
	  free(temp);
  }
}
void display()
{
 temp=head;
 while(temp!=NULL)
 {
  printf(" %d",temp->data);
  temp=temp->next;
} }
  
int main()
{
int ch;
while(1)
{
printf("\nEnter choice\n1)infront\n2)inend\n3)inpos\n4)defront\n5)deend\n6)depos\n8)exit\n7)Display\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:infront();
	       break;
	case 2:inend();
	       break;
	       case 3:inpos();
	       break;
	       case 4:defront();
	        break;
	        case 5:deend();
	        break;
	        case 6:depos();
	        break;
	        case 7:display();
	        break;
	        case 8:exit(0);
		}
}
 } 
	
	        
 
 
 	 
