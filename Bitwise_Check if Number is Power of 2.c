#include <stdio.h>

int main() {
 int a;
    scanf("%d",&a);
    if(a>0){
            if((a&a-1)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }

    }
    else{
        printf("No");
    }

    return 0;
}
