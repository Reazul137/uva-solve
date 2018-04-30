#include <stdio.h>

int main(){
    int T,N,K,P,result,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d %d",&N,&K,&P);
        if(P>=N){
            result = (P%N) + 1;
        }
        else{
            result = N - P + 1;
        }
        printf("Case %d: %d\n",i,result);

    }
    return 0;
}
