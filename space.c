#include<stdio.h>
#incude<conio.h>
int main(void) 
{
	char str[50];
  clrscr();
	int i,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count=count+1;
		}
	}
	printf("\nno of white spaces=%d",count);
	return 0;
}