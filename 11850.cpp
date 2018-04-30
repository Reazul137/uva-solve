#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n,i,a[10000],flag;
    while(cin>>n){
        if(n==0) break;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag = true;
        sort(a,a+n);
        for(i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                if(a[i+1]-a[i]<200){
                    flag = false;
                }
            }
        }
        if (2*(1422-a[n-1])>200) flag = false;
        if(flag) cout<<"POSSIBLE"<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
