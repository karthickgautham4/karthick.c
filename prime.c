#include <stdio.h>
void main()
{
    int i, n, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&i);

    for(n=2; n<=i/2; ++n)
    {
        // condition for nonprime number
        if(i%n==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",i);
    else
        printf("%d is not a prime number.",i);
    
   grtch();
}   

