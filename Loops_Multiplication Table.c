#include <stdio.h>

int main() {

 int n,z;
    scanf("%d",&n);
    for(int i=1;i<=10;++i){
        z=n*i;
        printf("%d x %d = %d\n", n,i,z);
        
    }
    return 0;
}
