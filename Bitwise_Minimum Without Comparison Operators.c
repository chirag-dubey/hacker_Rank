#include <stdio.h>

int main() {
 
    int a,b;
    scanf("%d %d",&a,&b);
    int c;
    c=a-b;
     c=c>>31;
  if(c & 1){
     printf("%d",a);
      }
    else
    {
        printf("%d",b);
    }
    
    return 0;
}