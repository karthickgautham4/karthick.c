#include<stdio.h>
#include<conio.h>
int main()
{
int count=0;
long a;
printf(" enter the integers");
scanf("%ld",&a);
while(a!=0)
{
a=a/10;
count++;
}
printf("count the no of integers %ld",count);
return0;
}
