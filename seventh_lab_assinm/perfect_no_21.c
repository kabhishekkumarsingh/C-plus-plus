#include <stdio.h>

int main()
{
    int n,m=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(int i=1;i<n;i++){
        if(n%i==0){
            m+=i;
        }
    }
    if(m==n){
        printf("perfect number.");
    }

else printf("not a perfect numbre:");
    return 0;
}
