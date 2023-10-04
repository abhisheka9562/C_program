#include<stdio.h>
#include<stdlib.h>
int a[10],n,front=-1,rear=-1,i;
void display()
{
 if(front==-1)
  printf("Empty");
 else if(front<=rear)
  {
    printf("\n");
    for(i=front;i<=rear;i++)
     printf(" %d",a[i]);
  }
 else
  {
        printf("\n");
        for(i=front;i<=n-1;i++)
     printf(" %d",a[i]);
    for(i=0;i<=rear;i++)
     printf(" %d",a[i]);
   }
}
void enqueue()
{
	if(front==(rear+1)%n)
	  printf("Full");
	else
	{
		 if(front==-1)
		  front++;
		 rear=(rear+1)%n;
		 printf("Enter element");
		 scanf("%d",&a[rear]);
         display();		   
     }
}
void dequeue()
{	 if(front==-1)
	  printf("Empty");
	 else if(front==rear)
	{
	printf("Deleted element is %d",a[front]);
		 	front=rear=-1;	  
    }
    else 
    {
	 printf("Deleted element is %d",a[front]);
	  front=(front+1)%n;
	  display(); 
  }
}
int main()
{
 int ch;
 printf("enter no.");
 scanf("%d",&n);
 while(1)
 {
 printf("\nEnter choice\n1)En\n2)De 3)Dis 4)Exit\n");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:enqueue();
         break;
    case 2:dequeue();
         break;
           case 3:display();
         break;
         case 4:exit(0);
                
 }
}}
