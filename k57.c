#include<stdio.h>
int main()
{
    int temp,a,b;
    clrscr();
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a:%d\nb:%d",a,b);
    return 0;
}
