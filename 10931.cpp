#include <iostream>

using namespace std;
int main()
{
    int n,ara[10000];
    while(cin>>n){
        int i = 0,p=0;
        if(n==0) break;
        while(n>0){
            ara[i]=n%2;
            if(ara[i]==1){
                p++;
            }
            n=n/2;
            i++;
        }
        cout<<"The parity of ";
        for(int j=i-1;j>=0;j--){
            cout<<ara[j];
        }
        cout<<" is "<<p<<" (mod 2)."<<endl;

    }
}
