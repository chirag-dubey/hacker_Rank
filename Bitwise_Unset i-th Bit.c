#include <stdio.h>

int main() {
 int a;
    scanf("%d",&a);
 int i;
    scanf("%d",&i);
    int b;

    b=(a&~(1<<i));
    printf("%d",b);
    
}
