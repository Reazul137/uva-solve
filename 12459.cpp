#include <iostream>

using namespace std;
int main()
{
    unsigned long long int n,i;
    unsigned long long int ara[100000];
    while(cin>>n){
        if(n==0) break;
        ara[1] = 1;
        ara[2] = 1;
        for(i=2;i<=n;i++){
            ara[i] = ara[i-1] + ara[i-2];
        }

        cout<<ara[n]<<endl;
    }
    return 0;
}




