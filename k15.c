#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    clrscr();
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        printf("%d",n);
    }
    return 0;
}
