#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    int test,flag=0;
    float u,a,t,v,s;
    while(cin>>test){\
        if(test==0) break;
        switch(test)
        {
            case 1:
                flag++;
                cin>>u>>v>>t;
                a = (v-u)/t;
                s = u*t + 0.5*a*t*t;
                cout<<"Case "<<flag<<": "<<fixed<<setprecision(3)<<s<<" "<<fixed<<setprecision(3)<<a<<endl;
                break;
            case 2:
                flag++;
                cin>>u>>v>>a;
                 t= (v-u)/a;
                s = u*t + 0.5*a*t*t;
                cout<<"Case "<<flag<<": "<<fixed<<setprecision(3)<<s<<" "<<fixed<<setprecision(3)<<t<<endl;
                break;
            case 3:
                flag++;
                cin>>u>>a>>s;
                v = sqrt(u*u + 2*a*s);
                t = (v-u)/a;
                cout<<"Case "<<flag<<": "<<fixed<<setprecision(3)<<v<<" "<<fixed<<setprecision(3)<<t<<endl;
                break;
            case 4:
                flag++;
                cin>>v>>a>>s;
                u = sqrt(v*v - 2*a*s);
                t = (v-u)/a;
                cout<<"Case "<<flag<<": "<<fixed<<setprecision(3)<<u<<" "<<fixed<<setprecision(3)<<t<<endl;
                break;
        }
    }
    return 0;
}
