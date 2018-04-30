#include <stdio.h>

int main()
{
    int T,N,K,P,i,result,K1;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d %d",&N,&K,&P);
        K1 = K;
        if(P>=N){
            result = (K + (P%N));
            if(result>N){
                result -=N;
            }
        }
        else{
            result = (K+P);
            if(result>N){
                result -=N;
            }
        }
        printf("Case %d: %d\n",i,result);
    }
    return 0;
}
