#include <stdio.h>

int main() {
      int n,z;
    scanf("%d",&n);
    if(n==0){
        printf("No");
        return 0;
    }
    z=n&(n+1);
    if(z==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}