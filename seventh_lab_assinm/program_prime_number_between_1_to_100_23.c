#include <stdio.h>

int main()
{
    int m=0;

    for(int i=2;i<=100;i++){
       for(int j=2;j<i/2;j++){
           if(i%j==0){
               m++;
           }
        
       }
       if(m==0)
       printf("%d\n",i);
       m=0;
    }
    

    return 0;
}
