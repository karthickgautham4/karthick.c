
#include <stdio.h>
#include<conio.h>
int main()
{
	int n,a,d,sum=0,i;
  clrscr();
	printf("enter the no of terms\n");
	scanf("%d",&n);
	printf("enter the first term\n");
	scanf("%d",&a);
	printf("enter the difference\n");
	scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        sum=sum+a;
        a=a+d;
    }
    printf("%d",sum);
	return 0;
}
© 2018 GitHub, Inc.
