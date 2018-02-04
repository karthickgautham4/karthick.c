#include <stdio.h>
#include<conio.h> 
void main()
{
    int num4, num5, num6;
    clrscr();
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num4, &num5, &num6);
    printf("num4 = %d\tnum5 = %d\tnum6 = %d\n", num4, num5, num6);
    if (num4 > num5)
    {
        if (num4 > num6)
        {
            printf("%d is the greatest among three \n",num4);
        }
        else
        {
            printf("%d is the greatest among three \n",num6);
        }
    }
    else if (num5 > num6)
        printf("%d is the greatest among three \n",num5);
    else
        printf("%d is the greatest among three \n",num6);
        getch();
}
