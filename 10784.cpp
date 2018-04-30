#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int N,n;
    int flag = 0;
    while(scanf("%lld",&N) != EOF){
        if(N == 0) break;
        n = ceil((3+sqrt(9+8*N))/2);
        printf("Case %d: %d\n",++flag,n);
    }
    return 0;
}

