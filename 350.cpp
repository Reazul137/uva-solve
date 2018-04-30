#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll z,i,m,l,c, no = 0, same;
    while(cin>>z>>i>>m>>l){
        if(z == 0 && i == 0 && m == 0 && l == 0) break;
        c = 0;
        map<long long, int> mp;
        while(1){
            same = ((z*l) + i)%m;
            mp[same]++;
            if(mp[same] == 2) break;
            c++;
            l = same;
        }
        printf("Case %lld: %lld\n",++no, c);
    }
    return 0;
}
