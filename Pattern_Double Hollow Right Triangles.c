#include <stdio.h>

int main() {

 int n;
    scanf("%d",&n);
    if(n>1){
        for(int i=1;i<=n;++i){
            for(int j=1;j<=2*n;++j){
                if(i==n||j==1||j==2*n||j==i||j==(2*(n-i)+i+1)){
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
        printf("Shape Not Possible");
    }
    return 0;
}
