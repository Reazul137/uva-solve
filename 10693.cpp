#include <bits/stdc++.h>

using namespace std;
int main()
{
    double l,f,v,vol;
    while(scanf("%lf%lf",&l,&f) != EOF){
        if(l == 0 && f == 0) break;
        v = sqrt(2*l*f);
        vol = (v*3600)/(2.0*l);
        printf("%.8lf %.8lf\n",v,vol);
    }
    return 0;
}

