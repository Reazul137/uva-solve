#include <iostream>

using namespace std;
int main()
{
    long long int n,i;
    long long int fib[10000],sum[10000];
    while(cin>>n){
        if(n==-1) break;
        fib[0] = 0;
        fib[1] = 1;
        sum[0] = 1;
        for(i=2;i<=n+1;i++){
            fib[i] = fib[i-1] + fib[i-2];
        }
        for(i=1;i<=n;i++){
            sum[i]=sum[i-1]+fib[i+1];
        }

        //sum1 = sum - ara[n+1];
        cout<<sum[n]-fib[i]<<" "<<sum[n]<<endl;
    }
    return 0;
}




