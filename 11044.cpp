#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int t,n,m;
    while(cin>>t){
        for(int i=0; i<t;i++){
            cin>>n>>m;
            cout<<int(n/3)*int(m/3)<<endl;
        }
    }
    return 0;
}


