#include <stdio.h>
#include<conio.h>
void main()
{
    char a;

    printf("Enter any character: ");
    scanf("%c", &a);


    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("'%c' is alphabet.", a);
    }
    else 
    {
        printf("'%c' is not a character.", a);
    }
    getch();
}
