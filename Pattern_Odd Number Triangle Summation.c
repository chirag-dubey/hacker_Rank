/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    int num=1;
    
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        int middle_value=0;
        for(int k=2;k<=n-i+1;++k)
        {
            printf("  ");
        }
        for(int j=1;j<=2*i-1;++j)
        {
            middle_value+=num;
           if(i==j && i!=1){
              
              printf("%d ",middle_value-3);
              continue;
           }
           printf("%d ",num);
           middle_value+=num;
           
           num+=2;
           
           
        }
        printf("\n");
    }

    return 0;
}
