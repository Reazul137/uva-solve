#include <iostream>

using namespace std;
int main()
{
    long long int n,i;
    long long int ara[10000],sum,sum1;
    while(cin>>n){
        if(n==-1) break;
        ara[1] = 1;
        ara[2] = 2;
        sum = 3;
        sum1 = 0;
        for(i=2;i<=n;i++){
            ara[i] = ara[i-1] + ara[i-2];
        }

        //sum1 = sum - ara[n+1];
        cout<<sum1<<" "<<sum<<endl;
    }
    return 0;
}



