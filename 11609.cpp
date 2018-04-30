#include <bits/stdc++.h>

using namespace std;
#define MOD 1000000007

long long int bM(int b, int p)
{
    if(p == 0) return 1;
    if(p == 1) return b;
    if( p % 2 == 0)
    {
        long long int ret = bM(b,p/2)%MOD;
        return (ret * ret)%MOD;
    }
    else
    {
        return (bM(b,p-1)%MOD)*(b%MOD);
    }
}
int main()
{
    int tc,n;
    cin>>tc;
    for(int i = 1; i <= tc; i++)
    {
        cin>>n;
        printf("Case #%d: ",i);
        cout<<(((bM(2,n-1)%MOD)*(n%MOD))%MOD)<<endl;

    }
    return 0;
}
