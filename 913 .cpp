#include <iostream>

using namespace std;
int main()
{
    long long int N;
    while(cin>>N){
        cout<<3*((((N+1)*(N+1))/2)-3)<<endl;
    }
    return 0;
}
