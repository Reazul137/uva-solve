#include <bits/stdc++.h>

using namespace std;

int main()
{
    string st,res;
    int maxi = 0;
    while(cin>>st)
    {
        int flg = 0;
        if( st == "E-N-D") break;
        int l = st.length();
        for(int i = 0; i < l; i++)
        {
            if( isalpha(st[i]) || st[i] == '-')
            {
                flg++;
            }
        }
        if(flg > maxi)
        {
            maxi = flg;
            res = st;
        }
    }
    int rl = res.length();
    for(int i=0; i < rl; i++)
        if(isalpha(res[i]) || res[i]=='-')
        {
            if(res[i]>='A' && res[i]<='Z')  res[i]=res[i]-'A'+'a';
            cout<<res[i];
        }
    cout<<endl;
    return 0;
}

