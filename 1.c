#include <stdio.h>
#include <stdlib.h>
#define max 20
void main()
{
 int ch,top=-1,stack[max],value,i;
 while(1)
 {
 printf("\nEnter the option\n");
 printf("\n1-Push\n2-Pop\n3-is empty\n4-isfull\n5-Display\n6-Exit\n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:if(top>(max-1))
 {
 printf("stack overflow");
 }
 else
 {
 printf("Enter the value:");
 scanf("%d",&value);
 top=top+1;
 stack[top]=value;

 }
 break;
 case 2:if(top==-1)
 printf("Stack empty");



else
 {
 value=stack[top];
 top--;
 }
 break;
 case 3:if(top==-1)
 printf("Stack empty");
 else
 printf("Not empty");
 break;
 case 4:if(top>(max-1))
 printf("stack full");
 else
 printf("Not full");
 break;
 case 5:for(i=0;i<=top;i++)
 {
 printf("%d\t",stack[i]);
 }
 break;
 case 6:exit(0);
 }
 }
}
