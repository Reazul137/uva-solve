#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    double a,b,c,r;
    while(cin>>a>>b>>c){
        if(a==0.0&&b==0.0&&c==0.0) r = 0.000;
        else{
            double s = (a+b+c)/2.0;
            r = sqrt(s*(s-a)*(s-b)*(s-c))/s;
        }
        cout<<"The radius of the round table is: "<<fixed<<setprecision(3)<<r<<endl;
    }
    return 0;
}

