#include<stdio.h>
int main(){
    int n;
printf("Enter size: ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    for(int j=n-1;j>=i;j--){
        printf(" ");
    }
    for(int j=1;j<=2*i-1;j++){
     if(i%2!=0){
         if(j%2!=0)
         printf("1");
         else 
         printf("0");
     }
     else {
         if(j%2!=0)
         printf("0");
         else 
         printf("1");
         
     }
    }
    printf("\n");
}

    return 0;
}
