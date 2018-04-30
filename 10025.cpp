#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>k;
        k = abs(k);
        int n = 0, sum = 0;
        while( sum < k) sum += (++n);

        if( k % 2){
            while (sum % 2 != 1) sum += (++n);
        }
        else{
            while(sum % 2 != 0) sum += (++n);
        }

        if(k == 0) cout<<3<<endl;
        else cout<<n<<endl;
        if(t) cout<<endl;
    }
    return 0;
}
