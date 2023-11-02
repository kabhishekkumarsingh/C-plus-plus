#include <stdio.h>

int main()
{
    int n,ser,rep,n1=0,new_number=0,f=0;

    printf("Enter a number:");
    scanf("%d",&n);
    printf("What you want to search:");
    scanf("%d",&ser);
    printf("what you want to replace:");
    scanf("%d",&rep);
    while(n>0){
        int r=n%10;
        if(r==ser)
        { 
            f++;
            r=rep;
          n1=n1*10+r;  
        }
        else
        n1=n1*10+r;
        n=n/10;
        
    }
    if(f==0)printf("number not found");
    else {
        while(n1>0){
            int r=n1%10;
            new_number=new_number*10+r;
            n1=n1/10;
        }
        printf("new number is %d",new_number);
        
    }

    return 0;
}
