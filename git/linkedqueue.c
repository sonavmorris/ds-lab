#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head,*temp,*newnode,*ptr,*preptr;
void enqueue();
void dequeue();
void display();
int main()
{
  int n;
  char a;
  head=(struct node*)malloc(sizeof(struct node));
  head->next=NULL;
printf("\n** main menu");
printf("\n1.enqueue:");
printf("\n2.dequeue");
printf("\n3.DISPLAY");
printf("\n4.EXIT");
do
{
printf("\nenter ur choice : ");
scanf("%d",&n);
switch(n)
{
case 1:enqueue();
       break;
case 2:dequeue();
       break;
case 3: display();
       break;
case 4: exit(0);
       break;
default: printf("\n Wrong Choice!");
 break;
}
printf("\ndo u want to cont... ");
scanf("%s",&a);
}while((a=='y')||(a=='Y'));

 }
void enqueue()
{
  int val;
    printf("enter value:");
    scanf("%d",&val);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;;
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
   
}
void dequeue()
{
ptr=head;
   if(head->next==NULL)
   {
       printf("\nunderflow");
   }
   else
   {
       ptr=ptr->next;
       head->next=ptr->next;
       printf("Data of node deleted : %d\n",ptr->data);
       free(ptr);
   }
}
void display()
{
temp=head;
while(temp->next!=NULL)
{
   temp=temp->next;
   printf("%d",temp->data);
}
}
