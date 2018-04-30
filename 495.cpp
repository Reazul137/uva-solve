#include <iostream>
#include <cstdio>

char ar[10000];
int fib(int n)
{
    if( n==1 || n==2) return 1;
    else if(ar[n] == 48 - '0'){
        ar[n] = fib(n-1) + fib(n-2);
    }
    return ar[n];
}
using namespace std;
int main()
{
    int n,a;
    while(cin>>n){
        if(n==0){
            cout<<"The Fibonacci number for "<<n<<" is "<<n<<endl;
            break;
        }
        cout<<"The Fibonacci number for "<<n<<" is "<<fib(n)<<endl;


    }
    return 0;
}
