#include<bits/stdc++.h>
using namespace std;

int n, dp[1002][32], val[1002], wgt[1002];

int func(int object, int weight)
{
    if(object==n) return 0;

    int &ret = dp[object][weight];
    if(ret!=-1) return ret;

    ret=func(object+1, weight);
    if(weight>=wgt[object])
        ret=max(ret, val[object]+func(object+1, weight-wgt[object]));
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
        memset(dp,-1, sizeof(dp));
        int tot = 0;
        while(g--){
            cin>>mw;
            tot += func(0,mw);
        }
        cout<<tot<<endl;
    }
    return 0;
}
