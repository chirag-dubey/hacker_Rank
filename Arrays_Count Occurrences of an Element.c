
#include <stdio.h>

int main() {

 int n,count=0;
    scanf("%d",&n);
    int a[n];
        for(int i=0;i<=n-1;++i){
            scanf("%d",&a[i]);
        }
    int key;
    scanf("%d",&key);
    for(int i=0;i<=n-1;++i){
        if(a[i]==key) ++count;
    }
    if(count>=1){
            printf("%d",count);
    }
    else if(count==0){
        printf("0");
    }
    
    return 0;
}
