#include <stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        if(i==1 || i== n){
            for(int j=1;j<=3*n;j++)
            printf("*");
        }
        else{
            for(int j=1;j<=3*n;j++) {
                if(j==1 || j==3*n)
                printf("*");
                else
                printf(" ");
            }
        }
        printf("\n");

    }

    return 0;
}
