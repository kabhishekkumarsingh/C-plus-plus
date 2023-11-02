#include <stdio.h>

int main()
{
    int m=0;

    for(int i=1;i<=10000;i++){
       for(int j=1;j<i;j++){
           if(i%j==0){
               m+=j;
           }
        
       }
       if(i==m)
       printf("%d\n",i);
       m=0;
    }
    

    return 0;
}
