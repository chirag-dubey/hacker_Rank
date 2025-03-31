#include <stdio.h>

int main() {

  int n;
    scanf("%d",&n);
    if(n>=3){
        if(n%2!=0){
            n=n+1;
            for(int i=1;i<=n;++i){
                for(int j=1;j<=n-1;++j){
                    if(j==n/2||j==n/2-i+1||j==n/2+i-1){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
                printf("\n");
            }
            
        }
        else{
                        for(int i=1;i<=n;++i){
                for(int j=1;j<=n-1;++j){
                    if(j==n/2||j==n/2-i+1||j==n/2+i-1){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }

            printf("\n");
        }
        
    }
    }
        
    else{
        printf("Shape Not Possible");
    }
        
    
    
    
    return 0;

}
