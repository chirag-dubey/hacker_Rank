#include <stdio.h>
#include <string.h>

int main() {
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(b>0){
        if(b%4 == 0){
        switch(a){
            case 1: printf("31");
                   break;
            case 2: printf("29");
                break;
            case 3: printf("31");
                break;
            case 4: printf("30");
                break;
            case 5: printf("31");
                 break;
            case 6: printf("30");
                 break;
            case 7: printf("31");
                    break;
            case 8: printf("31");
                break;
            case 9: printf("30");
                break;
            case 10: printf("31");
                break;
            case 11: printf("30");
                break;
            case 12: printf("31");
                break;
                
            default: printf("Invalid Month");
                break;
                         
        }
    }
        else{
            switch(a){
            case 1: printf("31");
                    break;
            case 2: printf("28");
                    break;
            case 3: printf("31");
                    break;
            case 4: printf("30");
                    break;
            case 5: printf("31");
                    break;
            case 6: printf("30");
                    break;
            case 7: printf("31");
                    break;
            case 8: printf("31");
                    break;
            case 9: printf("30");
                    break;
            case 10: printf("31");
                    break;
            case 11: printf("30");
                    break;
            case 12: printf("31");
                    break;
                
            default: printf("Invalid Month");
                    break;
        }
     
        }

    }
    else{
            if(0>=a || a>12){
             printf("Invalid Month\n");

            }
            printf("Invalid Year");
        }
    
    return 0;
}