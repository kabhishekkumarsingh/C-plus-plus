
#include<stdio.h>
int main(){
    int n;
printf("Enter size: ");
scanf("%d",&n);
for(int i=n;i>=1;i--){
    for(int j=n-1;j>=i;j--){
        printf(" ");
    }
    for(int j=1;j<=2*i-1;j++){
        printf("*");
    }
    printf("\n");
}

    return 0;
}
