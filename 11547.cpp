#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;
int main()
{
    int i,T;
    long long int n,N;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lld",&n);
        N = (((((n*567)/9)+7492)*235)/47)-498;
        if(N<0){
            N = -(N);
            N = N / 10;
            N = N % 10;
        }
        else{
            N = N / 10;
            N = N % 10;
        }
        printf("%lld\n",N);
    }
    return 0;
}
