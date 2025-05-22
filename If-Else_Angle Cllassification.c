#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int n;
    scanf("%d",&n);
int y;
y=n%360;
    if(n!=0){
        if(y==0){
        printf("Full Rotation");
    }
    else if( 180<y){
                printf("Reflex Angle");

    }
    else if( n%180==0){
                printf("Straight Angle");

    }
    else if( y>90){
                printf("Obtuse Angle");

    }
    else if( n%90==0){
                printf("Right Angle");

    }
    else{
                printf("Acute Angle");

    }
        
}
     else{
                printf("Acute Angle");

    }
    
     return 0;
}
