#include <stdio.h>

int main() {

 int n;
    scanf("%d",&n);
    n=((n>>31)&1);
    if(n==0){
        printf("Positive");
    }
    else if(n==1){
        printf("Negative");
    }
    return 0;
}
