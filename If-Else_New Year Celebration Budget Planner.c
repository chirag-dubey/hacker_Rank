#include <stdio.h>

int main() {

 int b;
    scanf("%d",&b);
     int n;
    scanf("%d",&n);
     int f;
    scanf("%d",&f);
     int d;
    scanf("%d",&d);
 int m;
    scanf("%d",&m);
 int o;
    scanf("%d",&o);

    
    if(b>=f*n+d+o){
       if((n>5 && n<=50)){
        if(n<=25){
            if((n*f<(0.5*b)) || (d<(0.3*b))){
                
                printf("Celebration Approved");
            }
            else{
                  printf("Celebration Denied");
            }
        }
         else if(n>25 && n<=50){
          if(b>=f*n+d+o+m){
            if((((n*f<(0.5*b)) || (d<(0.3*b))) && m>0)){
                printf("Celebration Approved");
            }
            else{
                         printf("Celebration Denied");
             }
         }
            else{
                printf("Celebration Denied");
            }
       }
           else{
                               printf("Celebration Denied");
           }
    
    }
       else{
                            printf("Celebration Denied");
        }
           
      }
        else{
                printf("Celebration Denied");
        }
        
    return 0;
}
