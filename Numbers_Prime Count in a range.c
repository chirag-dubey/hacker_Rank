#include <stdio.h>

int main() {

 int a,b,count;
     count=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;++i){

         for(int j=2;j<=i;++j){
             if(i%j==0){
                 if(i==j){
                   ++count;
                 }
                 else{
                     break;
                 }
             }
         }
    }
    printf("%d\n",count);
     
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;++i){

         for(int j=2;j<=i;++j){
             if(i%j==0){
                 if(i==j){
                   ++count;
                     printf("%d ",i);
                 }
                 else{
                     break;
                 }
             }
         }
    }
    return 0;
}
