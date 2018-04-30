#include <bits/stdc++.h>
#define ll long long
using namespace std;

map<ll, ll> mp;
int main()
{
    ll n,m,cd;
    while(scanf("%lld%lld",&n,&m) != EOF){
        if( n == 0 && m == 0) break;
        ll flag = 0;
        for(int i = 0; i < n; i++){
            scanf("%d",&cd);
            mp[cd] = 1;
        }
        for(int i = 0; i < m; i++){
            scanf("%d",&cd);
            if ( mp[cd] == 1){
                flag++;
            }
        }
        mp.clear();
        printf("%d\n",flag);
    }
    return 0;
}
