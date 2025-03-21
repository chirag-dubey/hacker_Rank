
#include <stdio.h>

int main()
{
    int n,a1,i;
    scanf("%d",&n);
    if(n>1){
        a1=n;
    for(i=n; n>=1; n=n)
    {
        printf("%d -> ",n);

        if(n%3==0) {
            n=n/3;
        }
        else if(n%5==0 && n%3!=0) {
            n=n-5;

        }
        else {
            n=n*5;
            i=n;
        }
        if(n==1){
            printf("1");
            if(a1<i) {
        printf("\nMax Number: %d",i);
    }
    else {
        printf("\nMax Number: %d",a1);
    }
            return 0;
        }

    }
    printf("0 -> 1");

    if(a1<i) {
        printf("\nMax Number: %d",i);
    }
    else {
        printf("\nMax Number: %d",a1);
    }
    }
    else if(n==1){
        printf("1");
        printf("\nMax Number: 1");
    }
    
    else{
        printf("%d -> 1",n);
        printf("\nMax Number: 1");
    }


    return 0;
}
