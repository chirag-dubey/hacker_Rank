#include <stdio.h>

int main() {

  int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        for(int k=2;k<=n-i+1;++k){
            printf(" ");
        }
        for(int j=1;j<=i;++j){
            
                printf("%d",j);
        }
            for(int j=i-1;j>=1;--j){
                 printf("%d",j);

            }
            
        
        printf("\n");
    }
    return 0;
}
