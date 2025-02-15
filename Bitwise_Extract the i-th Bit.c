#include <stdio.h>

int main() {

int n;
    scanf("%d",&n);
    int i;
    scanf("%d",&i);
    if(((n>>i)&1)==1){
        printf("1");
    }
    else if(((n>>i)&1)==0){
        printf("0");
    }

    return 0;
}