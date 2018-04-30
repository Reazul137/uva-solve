#include <iostream>

using namespace std;
int main()
{
    int t,i,r,l,ri,u,d;
    while(cin>>t){
        for(i=1;i<=t;i++){
            cin>>r;
            l = -(225*r)/100;
            ri = (275*r)/100;
            u = (150*r)/100;
            d = -(150*r)/100;
            cout<<"Case "<<i<<":"<<endl;
            cout<<l<<" "<<u<<endl;
            cout<<ri<<" "<<u<<endl;
            cout<<ri<<" "<<d<<endl;
            cout<<l<<" "<<d<<endl;
        }
    }
    return 0;
}
