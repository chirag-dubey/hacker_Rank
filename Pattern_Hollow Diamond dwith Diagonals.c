
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>1){
        for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=2*n-1;++j)
        {
            if(i==n || j==n || j==n-i+1 || j==n+i-1)
            printf("*");
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;++i)
    {
        for(int j=1;j<=2*n-1;++j)
        {
            if(j==i+1 || j==(2*n-1)-i || j==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    }
    else
        printf("Shape Not Possible");
    
}

