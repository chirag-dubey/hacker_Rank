#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=31;++i)
    {
        if(n==0){
            printf("1");
            break;
        }
        else if((n&(1<<i))==0){
            printf("%d",i+1);
            break;
        }
        
        else if(n==(-1)){
             printf("-1");
            break;
        }
    }
    
    //printf("Hello World");

    return 0;
}
