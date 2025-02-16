#include <stdio.h>

int main() {
 int n,b,c,d,e,f;
    scanf("%d",&n);
    
    b=((n&1)==1);
     c=(((n>>1)&1)==1);
     d=(((n>>2)&1)==1);
    e=(((n>>3)&1)==1);
 f=(b+c+d+e);
    printf("%d",f);
    return 0;
}