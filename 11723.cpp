#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,r,f=0;
    while(cin>>r>>n){
        if(r==0 && n==0 ) break;
        f++;
        int k = ceil((float)r/n)-1;
        if(k>26){
            printf("Case %d: impossible\n",f);
        }
        else{
            printf("Case %d: %d\n",f,k);
        }
    }
    return 0;
}
