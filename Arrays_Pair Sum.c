
#include <stdio.h>

 int main() {
    int n,target;
 scanf("%d",&n);
 int a[n];
  for(int i=0;i<=n-1;++i){
    scanf("%d",&a[i]);
   }
      scanf("%d",&target);
 for(int i=0;i<=n-1;++i){
    for(int j=i+1;j<=n-1;++j){
        if(target==a[i]+a[j]){
            printf("%d %d",a[i],a[j]);
            return 0;
        }
    }
}
     printf("-1");
    return 0;
}

