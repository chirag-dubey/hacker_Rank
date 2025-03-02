#include <stdio.h>

int main() {

 int n,z;
    z=1;
    scanf("%d",&n);
     if(n>0){
    printf("<1");
       for(int i=1;i<n;++i){
        z=2*z;
        printf(" %d", z);
        z=z;
    }
        printf(">");

    }

    
    return 0;
}


