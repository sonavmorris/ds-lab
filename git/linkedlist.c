#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head,*temp,*newnode,*ptr;
void insert_beg();
void insert_end();
void count();
void display();
int main()
{
int c;
head=(struct node *)malloc(sizeof(struct node));
head->next=NULL;
printf("\n** main menu");
printf("\n1.insert_beg:");
printf("\n2.insert_end:");
printf("\n4.count:");
printf("\n5.display:");
printf("\n6.exit:");
do{
printf("\nenter operation to be performed:");
scanf("%d",&c);
switch(c)
{
case 1:insert_beg();
break;
case 2:insert_end();
break;
case 3:count();
break;
case 4:display();
break;
}
}while(c!=5);
}
void insert_beg()
{
int val;
printf("enter the value:");
scanf("%d",&val);
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=val;
newnode->next=head->next;
head->next=newnode;
}
void insert_end()
{
int val;
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&newnode->data);
newnode->next=0;
temp=head;
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=newnode;
}
void count()
{
int pos=0;
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
pos=pos+1;
}
printf("count=%d",pos);
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




