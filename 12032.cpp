#include <bits/stdc++.h>

using namespace std;
const int MX = 1e5 + 10;

int main()
{
    int ara[ MX ],tc,n;
    scanf("%d",&tc);
    for(int i = 1; i <= tc; i++){
        scanf("%d",&n);
        memset(ara, 0, sizeof ara);
        for(int j = 1; j <= n; j++){
            scanf("%d",&ara[j]);
        }
        int dif = 0,subs = 0;
        for(int j = 1; j <= n; j++){
            subs = ara[j] - ara[j-1];
            if( subs > dif){
                dif = subs;
            }
        }
        int ans = dif;
        for(int j = 1; j <= n; j++){
            subs = ara[j] - ara[j-1];
            if( subs == dif){
                dif--;
            }
            else if(subs > dif){
                ans++;
                break;
            }
        }
        printf("Case %d: %d\n",i,ans);

    }

    return 0;
}
