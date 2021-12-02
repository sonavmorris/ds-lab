#include<stdio.h>
#include<stdlib.h>
#define n 5
int queue[n];
int front=-1,rear=-1;
int insert(void);
int delete_element(void);
int peek(void);
void display(void);
int main()
{
int option,val;
printf("\n**main menu**");
printf("\n1.Insert an element:");
printf("\n2.Delete an element:");
printf("\n3.Peek(top in queue)");
printf("\n4.display queue:");
printf("\n5.exit:");
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
       printf("\nThe first value in queue is %d",val);
       break;
case 4:display();
       break;
}
}while(option!=5);
return 0;
}
int insert()
{
int val;
printf("\nenter the number to be inserted in the queue:");
scanf("%d",&val);
if((front==0)&&(rear==n-1))
{
printf("\noverflow");
return 0;
}
if((front==-1)&&(rear==-1))
{
front=rear=0;
}
else if((rear==n-1)&&(front!=0))
{
rear=0;
}
else
{
rear++;
}
queue[rear]=val;
}
int delete_element()
{
   int val;
   if((front==-1)||(front>rear))
   {
    printf("\nunderflow");
    return 0;
   }
   else
    {
   val=queue[front];
      if(front==rear)
      {
      front=rear=-1;
      }
      else
      {
       if(front==n-1)
       { 
       front=0;
        }
      else
      {
      front=front+1;
       }
       }
       }
}
int peek()
{
if((front==-1)&&(rear==-1))
{
printf("\n queue is empty");
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
if((front==-1)&&(rear==-1))
{
printf("\n queue is empty");
}
  else
  {
  if(front<rear)
  {
   for(i=front;i<=rear;i++)
   printf("%d",queue[i]);
  }
   else
    {
    for(i=front;i<n;i++)
    printf("%d",queue[i]);
    
     for(i=0;i<rear;i++)
      {
      printf("%d",queue[i]);
        }
      }
    }
}








