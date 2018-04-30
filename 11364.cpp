#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
int main()
{
    int T,t,ar[30];
    while(cin>>T){
        for(int i=0; i<T; i++){
            cin>>t;
            for(int j=0; j<t; j++){
                cin>>ar[j];
            }
            sort(ar,ar+t);
            cout<<(ar[t-1]-ar[0])*2<<endl;
        }
    }
    return 0;
}


