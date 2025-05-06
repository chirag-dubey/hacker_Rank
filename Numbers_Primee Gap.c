#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
     int count=0;
    int i;
   if(n==2){
        printf("3");
    }
    else{
        for(i=n+1;i>1;++i){
        for(int j=2;j<=i;++j){
            if(i%j==0){
                if(i==j){
                    ++count;
                    break;  
                }
                else{
                   break;
                }
            }
        }
        if(count==1){ 
            break;
        }      
    }
    int flag=0;
    int a;
    for(a=n-1;a>1;--a){
        for(int j=2;j<=a;++j){
            if(a%j==0){
                if(a==j){
                    ++flag;
                    break;
                }
                else{
                   break;
                }
            }
        }
        if(flag==1){
            
            break;
        }
    }
    printf("%d",i-a);
    }
    
    return 0;
}
