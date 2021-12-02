#include<stdio.h>
#include<stdlib.h>
#define n 5
int front=-1,rear=-1;
int queue[n];
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
int main()
{
int option,val;
printf("\n\n**main menu");
printf("\n1.insert an element:");
printf("\n2.Delete an element:");
printf("\n3.peek(top in queue):");
printf("\n4.Display queue:");
printf("\n5.Exit");
do{
printf("\nEnter option:");
scanf("%d",&option);
switch(option)
{
case 1:insert();
       break;
case 2:val=delete_element();
       if(val!=-1)
       printf("\nThe number deleted is %d",val);
       break;
case 3:val=peek();
       if(val!=-1)
       printf("\nthe first value in queue is %d",val);
       break;
case 4:display();
       break;
}
}while(option!=5);
 return 0;
}
void insert()
{
int num;
printf("\nEnter the number to be inserted in the queue:");
scanf("%d",&num);
if(rear==n-1)
{
printf("\noverflow");
}
else if((front==-1)&&(rear==-1))
{
front=rear=0;
queue[rear]=num;
}
else
{
rear++;
queue[rear]=num;
}
}
int delete_element()
{
int val;
if(front==-1||front>rear)
{
printf("\n underflow");
return -1;
}
else
{
val=queue[front];
front++;
if(front>rear)
{
front=rear=-1;
return(val);
}
}
}
int peek()
{
if(front==-1||front>rear)
{
printf("\n queue empty");
return -1;
}
else
{
return queue[front];
}
}
void display()
{
int i;
printf("\n");
if(front==-1||front>rear)
{
printf("\nqueue empty");
}
else
{
for(i=front;i<=rear;i++)
{
printf("\t %d",queue[i]);
}
}
}






