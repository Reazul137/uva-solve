#include <bits/stdc++.h>
#define pi acos(-1)

using namespace std;

int main()
{
    double D,V,d;
    while(scanf("%lf%lf",&D,&V) != EOF){
        if( D == 0 && V == 0) break;
        double cone = (pi*pow(D,3) - 6*V)/pi;
        d = pow(cone,1.0/3.0);
        printf("%.3lf\n",d);
    }
    return 0;
}

