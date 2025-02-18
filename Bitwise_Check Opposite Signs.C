#include <stdio.h>

int main() {

 int a;
    scanf("%d",&a);
     int b;
    scanf("%d",&b);
    a=((a>>31)&1);
    b=((b>>31)&1);
    if((a==1) & (b==1) | (a==0) & (b==0)){
        printf("No");
    }
    else if((a==1) & (b==0) | (a==0) & (b==1)){
        printf("Yes");
    }

    return 0;
}
