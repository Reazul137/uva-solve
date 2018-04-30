#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, ar[6];
    cin>>t;
    while(t--)
    {
        for(int i = 0; i < 5; i++)
        {
            cin>>ar[i];
        }
        int tot = 0;
        for(int i = 0; i < 4; i++)
        {
            if(ar[i] + 1 == ar[i+1]) tot++;
            else break;
        }
//        cout<<tot<<endl;
        if(tot == 4) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}
