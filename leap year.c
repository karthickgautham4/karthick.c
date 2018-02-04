
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter the Year");
scanf("%d",&a);
if(a%4==0)
printf("\nThe given year is leap year");
else 
printf("\nThe given year is not a leap year");
getch();
}
