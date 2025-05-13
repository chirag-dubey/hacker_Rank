#include <stdio.h>

int is_spy_number(int n) {
    // Your code here to calculate sum and product of digits
    int sum,mul,rem;
    sum=0;
    mul=1;
    while(n>0){
        rem=n%10;
        sum=rem+sum;
        mul=mul*rem;
        n=n/10;
    }
    if(sum==mul){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n); \
    printf("%d\n", is_spy_number(n));
    return 0;
}
