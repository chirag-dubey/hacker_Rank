#include <stdio.h>

int main() {

  int n;
    scanf("%d",&n);
    if(n>1){
        for(int j=1;j<=n;++j){
            for(int k=2;k<=(n-j+1);++k){
                printf(" ");
            }
           for(int i=1;i<=2*j-1;++i){
            printf("*");
        } 
            printf("\n");
        }
        
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}
