#include <bits/stdc++.h>

using namespace std;
int ar[1000];
int main()
{
    int n,r,num;
    while(cin>>n>>r){
        for(int i = 0; i < r; i++)
        {
            cin>>num;
            ar[num] = 1;
        }
        int flag = 0;
        for(int i = 1; i <= n; i++)
        {
            if(ar[i] != 1)
            {
                cout<<i<<" ";
                flag++;
            }
        }
        if(flag == 0) cout<<"*"<<endl;
        else cout<<endl;
        memset(ar,0,sizeof(ar));
    }
    return 0;
}
