#include <stdio.h>

int main(){
    int T,a,b,j,i,sum;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&a);
        scanf("%d",&b);
        sum = 0;
        for(j=a;j<=b;j++){
            if(j%2 != 0){
                sum += j;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
