#include <iostream>

using namespace std;
unsigned long long fac(int x)
{
    if(x==0) return 1;
    else{
        return x*fac(x-1);
    }
}
int main()
{
    int n;
    while(cin>>n){
        if(n<0){
            if(n%2==0){
                cout<<"Underflow!"<<endl;
            }
            else{
                cout<<"Overflow!"<<endl;
            }
        }
        else if(n>13){
            cout<<"Overflow!"<<endl;
            continue;
        }
        else if(n<8){
            cout<<"Underflow!"<<endl;
            continue;
        }
        else{
            unsigned long long int a = fac(n);
            cout<<a<<endl;
        }
    }
    return 0;
}
