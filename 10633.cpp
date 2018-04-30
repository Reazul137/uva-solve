#include <bits/stdc++.h>

using namespace std;
int main()
{
    unsigned long long n,x;
    while(scanf("%lld",&n) != EOF){
        if(n == 0) break;
        x = (n*10)/9;
        if((n*10)%9 == 0){
            printf("%lld %lld\n",x-1,x);
        }
        else printf("%lld\n",x);
    }
    return 0;
}
