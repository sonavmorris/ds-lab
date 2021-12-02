
#include<stdio.h>
#define n 5
void small();
void big();
void reverse();
void sum();
void mean();
int a[n];
void main()
{
int i,c;
printf("enter the elements in the array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the operation to be performed:");
scanf("%d",&c);
switch(c)
{
case 1:small();
break;
case 2:big();
break;
case 3:reverse();
break;
case 4:sum();
break;
case 5:mean();
break;
default:printf("wrong operation");
}
}
void small()
{
int i,small=a[0];
for(i=0;i<n;i++)
{
if(a[i]<a[0])
{
small=a[i];
}
}
printf("small=%d",small);
}
void big()
{
int i,big=0;
for(i=0;i<n;i++)
{
if(a[i]>big)
{
big=a[i];
}
}
printf("big=%d",big);
}
void reverse()
{
int i,rev;
for(i=n-1;i>-1;i--)
{
rev=a[i];
printf("%d",a[i]);
}
}
void sum()
{
int i,sum=0;
for(i=0;i<n;i++)
{
sum+=a[i];
}
printf("sum=%d",sum);
}
void mean()
{
int i,mean,sum=0;
for(i=0;i<n;i++)
{
sum=sum+a[i];
mean=sum/n;
}
printf("mean=%d",mean);
}




