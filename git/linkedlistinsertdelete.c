#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
 struct node *next;
};
struct node *head,*temp,*newnode,*ptr,*preptr;
void insert_beg();
void insert_end();
void insert_pos();
void delete_beg();
void delete_end();
void delete_pos();

void display();
int main()
{
  int n;
  char a;
  head=(struct node*)malloc(sizeof(struct node));
  head->next=NULL;
  printf("\n************************* MENU ************************");
printf("\n1.insert_begining");
printf("\n2.insert_end");
printf("\n3 insert_position");
printf("\n4.DISPLAY");
printf("\n5.delete_begining");
printf("\n6.delete_end");
printf("\n7 delete_position");
printf("\n8.EXIT");
do
{
printf("\nenter ur choice : ");
scanf("%d",&n);
switch(n)
{
case 1:insert_beg();
  break;
case 2:insert_end();
  break;
    case 3: insert_pos();
  break;
case 4: display();
      break;
case 5: delete_beg();
      break;
case 6:delete_end();
      break;
case 7:delete_pos();
      break;
case 8: exit(0);
break;
default: printf("\n Wrong Choice!");
 break;
}
printf("\ndo u want to cont... ");
scanf("%s",&a);
}while((a=='y')||(a=='Y'));

 }

 void insert_beg()
 {
     int val;
     printf("enter value:");
     scanf("%d",&val);
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=val;
     newnode->next=head->next;
     head->next=newnode;
 }


void insert_end()
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
void insert_pos()
{
int val,pos;
temp=head;
    printf("enter value:");
    scanf("%d",&val);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data of the node after which new node has to be placed:");
    scanf("%d",&pos);
    while(temp->next!=NULL)
    {
    if(temp->data==pos)
    {
        break;
    }
    else
    {
        temp=temp->next;
    }
    }
    newnode->data=val;
    newnode->next=temp->next;
    temp->next=newnode;
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
void delete_beg()
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
void delete_end()
{
     ptr=head;
    if(head->next==NULL)
    {
        printf("underflow");
    }
    else
    {
    while(ptr->next!=NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    printf("Data of node deleted : %d\n",ptr->data);
    free(ptr);
}
}
void delete_pos()
{
    int val;
ptr=head;
if(head->next==NULL)
{
printf("\nUnderflow\n");
}
else
{
printf("Enter the data of the node after which the node has to be deleted : ");
scanf("%d",&val);
while(ptr->data!=val)
{
preptr=ptr;
ptr=ptr->next;
}
preptr=ptr;
ptr=ptr->next;
preptr->next=ptr->next;
printf("Data of node deleted : %d\n",ptr->data);
free(ptr);
}
}
