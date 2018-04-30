#include <stdio.h>

long long rev(long long int x )
{
    long long int reverse = 0;
    while(x!=0){
        reverse = reverse*10 + x % 10;
        x = x / 10;
    }

    return reverse;
}

int main()
{
    int N,count,i;
    long long int z,P;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%lld",&P);
        if(P==196) break;
        count = 0;
        while(P != rev(P)){
            z = rev(P);
            P = P + z;
            count++;
        }
        printf("%d %lld\n",count,P);
    }
    return 0;
}
