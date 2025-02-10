#include <stdio.h>

int main() {

int x;
scanf("%d",&x);    
    int y;
scanf("%d",&y);    
int z;
scanf("%d",&z);    
 if(x%y==0){
     if(x%z==0){
         printf("X defeats all!");
     }
     else{
         printf("Y triumphs over X!");

     }
   
 }
 else{
     if(x%z==0){
         printf("Z outsmarts X!");
     }
     else{
        printf("X remains undefeated!");

     }
 }
    return 0;
}