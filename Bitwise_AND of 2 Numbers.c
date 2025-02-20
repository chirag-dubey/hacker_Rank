#include <stdio.h>

int main() {


    int a,n,c;
    scanf("%d",&a);
        int b;
    scanf("%d",&b);
    n=(~b | ~a);
    c=~n;
    printf("%d",c);

    return 0;
}
