#include <bits/stdc++.h>
#define ll long long

using namespace std;
priority_queue< ll, vector<ll>, greater<ll> > pq;
int main()
{
    ll n, m, x, y;
    while(scanf("%lld",&n) != EOF){
        if( n == 0) break;
        for(int i = 0; i < n; i++){
            scanf("%lld",&m);
            pq.push(m);
        }
        ll cnt = 0;
        while( pq.size() > 1 ){
            x  = pq.top();
            pq.pop();
            y  = pq.top();
            pq.pop();
            cnt += ( x + y);
            pq.push(x + y);
        }
        cout<<cnt<<endl;
        pq.pop();
    }
    return 0;
}
