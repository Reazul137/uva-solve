#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,tt,a,b,d,fl,ss=1;
    int ar[1000];
    cin>>t;
    while(t--){
        cin>>tt;
        int ct = tt;
        fl=0;
        cin>>a>>b;
        int temp = abs(a-b);
        int flag = 0;
        for(int i=0; i<tt-1;i++){
            cin>>a>>b;
            if(abs(a-b)!= temp){
                flag = 1;
            }
        }
        if(ss>1) cout<<"\n";
        if(flag != 1){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        ss++;
    }
    return 0;
}


