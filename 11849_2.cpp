#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int m,n,i,cd,flg;
    map<long long int , long long int >mp;
    while(cin>>n>>m)
    {
        if(n==0 && m==0) break;
        flg=0;
        for(i=0; i<n; i++)
        {
            cin>>cd;
            mp[cd]++;
        }

        for(i=0; i<m; i++)
        {
            cin>>cd;
            mp[cd]++;
        }
        int l = mp.size();
        for(i=0; i< l; i++)
        {
            if(mp[i] > 1)
                flg++;
        }

        mp.clear();
        cout<<flg<<endl;
    }

    return 0;
}
