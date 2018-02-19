#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
   char s[100];
   clrscr();
   int l,count=0,c,i;
   scanf("%s",s);
   l=strlen(s);
   c=(int)s;
   for(i=0;i<l;i++)
   {
       if(c[i]>=32 && c[i]<=64)
       {
       count++;
       printf("%d",count);
       }
       else
       printf("%d",count);
   }

    return 0;
}
