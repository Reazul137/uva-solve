#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int A,B,t,i;
    double N,M;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>N>>M>>A>>B;
        double dif = ((A*1.0+B*1.0)* M) - (N*(A*1.0));
        double result = dif/B*1.0;
        if(result < 0 || result >10){
            cout<<"Case #"<<i<<": Impossible"<<endl;
        }
        else{
            cout<<"Case #"<<i<<": "<<fixed<<setprecision(2)<<result<<endl;
        }
    }
    return 0;
}
