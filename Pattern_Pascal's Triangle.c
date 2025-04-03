#include <stdio.h>

int main() {
 int n,s;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=2;k<=n-i;k++){
            printf(" ");     
        } 
        for(int j=0;j<=i;j++){
            if(j==0||j==n){
                s=1;
                printf("%d ",s);
            }
            else{
                
                s=(s*(i-j+1))/j;
                printf("%d ",s);
            }
        }
        printf("\n");
    }

    return 0;
}
