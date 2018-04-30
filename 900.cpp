#include <iostream>

using namespace std;
long long int func(long long int x){
    if(x==1) return 1;
    else if(x==2) return 2;
    else{
        return func(x-2) + func(x-1);
    }
}

int main()
{
    long long int n;
    while(cin>>n){
        if(n==0) break;
        cout<<func(n)<<endl;
    }
    return 0;
}
