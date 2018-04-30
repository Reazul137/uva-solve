#include <bits/stdc++.h>

using namespace std;
int mem[102][50004],m,total,ara[102];
int dp(int i, int sum)
{
    if(i == m)
        return abs((total - sum) - sum);
    if(mem[i][sum] != -1)
        return mem[i][sum];
    return mem[i][sum] = min(dp(i+1, sum+ara[i]), dp(i+1, sum));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>m;
        total = 0;
        for(int i = 0; i < m; i++){
            scanf("%d", &ara[i]);
            total += ara[i];
        }
        memset(mem, -1, sizeof mem);
        cout<<dp(0,0)<<endl;
    }

	return 0;
}
