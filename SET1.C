#include<stdio.h>
#include<conio.h>
void main()
{
int num,i=40,r=70;
printf("print odd number in a given range i to r:");
for (num=i;num<=r;num++)
{
if(num%2==1)
printf("%d",num);
}
getch();
}
