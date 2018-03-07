#include<stdio.h>
int main()
{
  int a,b,c;
  printf("\n Enter the number:");
  scanf("%d",&a);
  printf("\n enter the range:");
  scanf("%d%d",&b,&c);
  if((b<a&&a<c)||(c<a&&a<b))
  printf("\n yes");
  else
  printf("\n No");
  return 0;
}
