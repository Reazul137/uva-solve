#include <bits/stdc++.h>

using namespace std;
int main () {
    int t, cs = 0, n, sq;
    cin>>t;
    while(t--){
        cin>>n;
        sq = sqrt(n);
        printf("Case %d:",++cs);
        for(int i = sq; i >= 1; i--){
            int x = n - (i*i);
            if(x % i == 0 && x > 0){
                printf(" %d",x);
            }
        }
        cout<<endl;
    }
    return 0;
}
