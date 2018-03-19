#include <stdio.h>
#include<conio.h>
void main() 
{

int L,B,H,totalsurfacearea=0,volume=0;
clrscr();
scanf("%d %d %d",&L,&B,&H);
totalsurfacearea=2*((L*B)+(B*H)+(L*H));
volume=L*B*H;

printf("%d",totalsurfacearea);

printf("\n%d",volume);

getch();

}
