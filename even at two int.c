#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter the range:");
scanf("%d%d",&b,&c);
for(a=b;a<=c;a++)
{
if(a%2==0)
printf("\nthe values are %d",a);
}
getch();
}
