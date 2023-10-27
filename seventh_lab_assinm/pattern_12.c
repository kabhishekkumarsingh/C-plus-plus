#include <stdio.h>

int main()
{
int  n;
printf("Enter size: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= (2 * n); j++)
        { 
            if( i+j <= n+1)  
                printf("*");
            else
                printf(" ");
            if((i + n) <= j)  
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
