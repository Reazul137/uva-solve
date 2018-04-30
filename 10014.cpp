#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n;
    double a,b,ar[3500],s,a1;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        cin>>a>>b;
        s = 0;
        for(int j = 0; j < n; j++){
            cin>>ar[j];
            s += 2 * (n-j)*ar[j];
        }
        a1 =  (n*a + b - s)/(n+1);
        printf("%.2f\n",a1);
        if(i != t-1) cout<<endl;
    }
    return 0;
}
