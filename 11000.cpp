#include <iostream>

long long int fib(long long int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else{
        return fib(n-1)+fib(n-2);
    }
}
using namespace std;
int main()
{
    long long int n,i;
    while(cin>>n){
        if(n==-1) break;
        int sum = 0,sum2;
         i = 0 ;
        while( i <= n)
        {
            sum += fib(i);
            i++;
        }
        sum2 = sum + fib(n+1);
        cout<<sum<<" "<<sum2<<endl;
    }
    return 0;
}


