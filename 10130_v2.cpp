#include <bits/stdc++.h>

using namespace std;
int n,val[1002], wgt[1002],di[1002][32];
int dp(int obj, int wi)
{
    if(obj == n) return 0;
    if(di[obj][wi] != -1)
        return di[obj][wi];
    int ret = dp(obj+1, wi);
    if(wi >= wgt[obj])
    {
        ret = max(ret,val[obj] + dp(obj+1, wi-wgt[obj]));
    }
    return ret;
}
int main()
{
    int tc,g,mw;
    cin>>tc;
    while(tc--)
    {
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>val[i]>>wgt[i];
        }
        cin>>g;
        memset(di,-1, sizeof(di));
        int tot = 0;
        while(g--){
            cin>>mw;
            tot += dp(0,mw);
        }
        cout<<tot<<endl;
    }
    return 0;
}
