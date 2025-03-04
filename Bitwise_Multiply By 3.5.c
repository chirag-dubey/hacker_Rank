#include <stdio.h>

int main() {

 int n,a;
    scanf("%d",&n);
    a=((n<<3)-n);
    a=a>>1;
    printf("%d",a);
    return 0;
}
