#include<stdio.h>
int main(){
    int n;
printf("Enter size: ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    
    for(int j=n-1;j>=i;j--){
        printf(" ");
    }
    
    for(int j=1;j<=i;j++){
     printf("%d",j);
    }
    
    for(int j=i;j>=1;j--){
     printf("%d",j);
    }
    
    printf("\n");
}

    return 0;
}
