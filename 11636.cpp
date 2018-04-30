#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 0,n;
    while(scanf("%d",&n) && n > 0){
        int fl = 1, times = 0;
        while( fl < n){
            fl *= 2;
            times++;
        }
        printf("Case %d: %d\n",++t,times);
    }

    return 0;
}


