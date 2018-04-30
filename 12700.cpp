#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n;
    char c;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++){
        int b = 0 , w = 0 ,tie = 0 ,ab = 0;
        scanf("%d",&n);
        getchar();
        for(int j = 0; j < n; j++){
            scanf("%c",&c);
            if(c == 'B') b++;
            else if(c == 'W') w++;
            else if(c == 'A') ab++;
            else if(c == 'T') tie++;
        }
        if( ab == n) printf("Case %d: ABANDONED\n",i);
        else if( b + ab == n) printf("Case %d: BANGLAWASH\n",i);
        else if( w + ab == n) printf("Case %d: WHITEWASH\n",i);
        else if( w > b) printf("Case %d: WWW %d - %d\n",i,w,b);
        else if( b > w) printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        else printf("Case %d: DRAW %d %d\n",i,b,tie);
    }
    return 0;
}
