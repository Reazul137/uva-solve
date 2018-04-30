#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,tt,a,b,ss=1;
    cin>>t;
    while(t--){
        cin>>tt;
        set<int>myset;
        for(int i=0; i<tt;i++){
            cin>>a>>b;
            myset.insert(abs(a-b));
        }

        if(myset.size() == 1){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        if(t) cout<<"\n";
    }
    return 0;
}


