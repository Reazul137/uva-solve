#include <bits/stdc++.h>

using namespace std;
int main()
{
    double n;
    int tc = 0;
    while(scanf("%lf",&n) != EOF){
        if(n == 0) break;
        long long int ans = 0, temp = 0;
        int i = 1;
        while( i < n - 2*i - 1){
            temp = ( (n - i - 1) / 2 )- i;
            if(temp < 1) break;
            ans += temp;
            i++;
        }
        printf("Case %d: %lld\n",++tc,ans);
    }
    return 0;
}
