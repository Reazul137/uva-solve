#include <stdio.h>

int main()
{
    long long int N,n;
    while(scanf("%lld",&n)!=EOF){
        N = (n*(n+1)/2)*(n*(n+1)/2);
        printf("%lld\n",N);
    }
    return 0;
}
