#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

 int n,rem,ten,square,lastno,temp;
    scanf("%d",&n);
    ten=1;
    temp=n;
    while(n>0){
        rem=n%10;
        ten=10*ten;
        n=n/10;
    }
    square=temp*temp;
    lastno=square%ten;
    if(lastno==temp){
        printf("%d is automorphic",temp);
    }
    else{
        printf("%d is not automorphic",temp);
    }
    
    return 0;
}
