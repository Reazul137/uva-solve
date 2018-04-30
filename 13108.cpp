#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    long long int n,ret;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++){
        scanf("%lld",&n);
        ret = (n*n*n*n-6*n*n*n+23*n*n-18*n+24)/24;
        printf("%lld\n",ret);
    }

    return 0;
}

