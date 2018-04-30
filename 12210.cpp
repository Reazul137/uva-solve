#include <bits/stdc++.h>

using namespace std;
int main()
{
    int br[10010], sr[10010];
    int b,s;
    int cas = 1;
    while(cin>>b>>s)
    {
        if(b == 0 && s == 0) break;
        int mini = 100;
        for(int i = 0; i<b; i++)
        {
            cin>>br[i];
            if(mini>br[i])
            {
                mini = br[i];
            }
        }
        for(int i = 0; i<s; i++)
        {
            cin>>br[i];
        }
        printf("Case %d: ",cas++);
        if( b - s <= 0) cout<<"0"<<endl;
        else printf("%d %d\n",b-s,mini);
    }

    return 0;
}

