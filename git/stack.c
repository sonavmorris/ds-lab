#include<stdio.h>
#define n 5
int top=-1;
void push();
void pop();
void top1();
void display();
int stack[n];
void main()
{
int i,c;
char a;
do{
printf("enter the operation to be performed:");
scanf("%d",&c);
switch(c)
{
case 1:push();
break;
case 2:pop();
break;
case 3:top1();
break;
case 4:display();
break;
default:printf("wrong operation");
}
printf("\ndo you want to continue?\n");
scanf("%s",&a); 
}while((a=='Y')||(a=='y'));
}
void push()
{
int x;
printf("enter data:");
scanf("%d",&x);
if(top==n-1)
{
printf("overflow");
}
else
{
top++;
stack[top]=x;
}
}
void pop()
{
int item;
if(top==-1)
{
printf("underflow");
}
else
{
item=stack[top];
top--;
printf("popped item=%d",item);
}
}
void top1()
{
if(top==-1)
{
printf("stack is empty");
}
else
{
printf("%d",stack[top]);
}
}
void display()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
}

