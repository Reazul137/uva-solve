#include <iostream>

using namespace std;
int main()
{
    int i,t,N,K,X;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>N;
        cin>>K;
        cin>>X;
        int start = 0;
        for(int j=X; j<=(X+K-1);j++){
            start += j;
        }
        cout<<"Case "<<i<<": "<<(N*(N+1)/2)-start<<endl;
    }

}
