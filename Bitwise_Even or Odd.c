#include <stdio.h>

int main() {
 int n;
    scanf("%d",&n);
    
     if((n&1)==1){
        printf("Odd");
    }
    else{
        printf("Even");
    }
return 0;
}
