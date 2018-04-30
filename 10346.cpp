#include <iostream>

using namespace std;

int main()
{
    int n,k,cig,div,extra;
    while(cin>>n>>k)
    {
        cig = n;
        while(cig>=k){
            div = cig/k;
            extra = cig % k;
            n += div;
            cig = div + extra;
        }
        cout<<n<<endl;
    }
    return 0;
}
