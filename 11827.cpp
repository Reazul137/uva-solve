#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{
    if(a % b == 0) return b;
    return gcd(b,a%b);
}
int main()
{
    int t,n,a[110],ans;
    string s;
    scanf("%d",&t);
    getchar();
    while(t--){
        getline(cin,s);
        stringstream is(s);
        n = 0;
        while(is>>a[n]) ++n;
        ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ans = max(ans, gcd(a[i], a[j]));
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}

