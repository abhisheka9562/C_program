#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
int i,n,a[10];
void push()
{
 if(rear==n-1)
  printf("Queue is full");
 else
  {
   if(front==-1)
   front++;
  rear++;
  printf("Enter element");
  scanf("%d",&a[rear]);
  display();
  }
}
void pop()
{
 if(front==-1)
  printf("queue is epmty");
 else if(front==rear)
 {
  printf("Deleted element is %d",a[front]);     
  front=rear=-1;
 } 
 else
  {
   printf("Deleted element is %d",a[front]);     
   front++;
    display();
   }
}
void display()
{
 if(front==-1)
  printf("Empty");
 else
 {
   for(i=front;i<=rear;i++)
   {
    printf(" `%d",a[i]);
   }
 }
}     
void main()
{
 int ch;
 printf("Enter number");
 scanf("%d",&n);
 while(1)
 {
  printf("\nEnter choice\n1)Push\n2)Pop\n3)Display\n4)Exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:push();
          break;
     case 2:pop();
          break;
       case 3:display();
          break;
          case 4:exit(0);
   }
  }    
}                  
