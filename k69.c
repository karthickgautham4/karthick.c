#include <stdio.h>

int main(void) 
{
	int a,b,c;
	printf("enter the number1:");
	scanf("%d",&a);
	printf("enter the number2:");
	scanf("%d",&b);
	c=a-b;
	if(c%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
