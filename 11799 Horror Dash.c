#include <stdio.h>

int main(){
    int T,N,i,j,ara[1000],max,k;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        for(j=1;j<=N;j++){
            scanf("%d",&ara[j]);
        }
        max = 0;
        for(k=1;k<=N;k++){
            if ( ara[k] > max){
                max = ara[k];
            }
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
