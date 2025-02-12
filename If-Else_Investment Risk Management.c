#include <stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    int income;
    scanf("%d",&income);
    int rt;
    scanf("%d",&rt);
    if(age>50 && income>75000 && rt==3){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }

    else if(age>=30 && age<=50 && income>75000 && rt==3){
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if(age>=30 && age<=50 && income>75000 && (rt==2 || rt==1)){
           printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
     else if(age>=30 && age<=50 && income<=75000 &&  rt==2){
           printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    else if(age<30){
     printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else{
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    
 return 0;
}
    