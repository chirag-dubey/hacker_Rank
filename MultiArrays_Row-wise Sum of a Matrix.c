#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;++i){
        int sum=0;
        for(int j=0;j<m;++j){
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
        printf("%d ",sum);
    }
    
    return 0;
}

