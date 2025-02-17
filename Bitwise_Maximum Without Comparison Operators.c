#include <stdio.h>

int main() {

     int a;
    scanf("%d",&a);
         int b;
    scanf("%d",&b);
    int c;
    c=a-b;
    c=(c>>31)&1;
    int d;
    d=(c*b) + a*(1-c); 
    printf("%d",d);

    return 0;
}



