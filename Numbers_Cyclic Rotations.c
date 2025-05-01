
#include <stdio.h>

int main() {

    int n,newno,count,last;
    int ten=1;
    count=0;

    scanf("%d",&n);
    int rem=n;
    for(int i=1; i>0; i=i) {
        ten*=10;
        n=n/10;
        count++;
        if(n==0) {
            ten=ten/10;
            break;
        }
    }

    for(int i=1; i<=count; ++i) {
        last=rem%10;
        rem=rem/10;
        newno=last*ten+rem;
        printf("%d\n",newno);
        rem=newno;
    }

    return 0;
}
