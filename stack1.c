#include<stdio.h>
#include<stdlib.h>
int top=-1,n,i;
int a[10];

void push()
{
 if(top==n-1)
  printf("Stack is full");
 else
  {
   printf("Enter element");
   top++;
   scanf("%d",&a[top]);
  }
}
void pop()
{
 if(top==-1)
  printf("Stack is empty");
 else
  {
   printf("Deleted element is %d",a[top]);
   top--;
  }
}
void display()
{
 for(i=0;i<=top;i++)
  printf(" %d",a[i]);
}
int main()
{
 int ch;
 printf("Enter number of items in stack");
 scanf("%d",&n);
 while(1)
 {
 printf("\nEnter your choice\n 1)Push\n 2)Pop\n 3)Display\n 4)Exit\n");
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
 }}                                } 
