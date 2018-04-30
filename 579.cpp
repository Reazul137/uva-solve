#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int main()
{
    int h,m;
    char a;
    while(scanf("%d%c%d",&h,&a,&m)==3){
        if( h == 0 & m == 0) break;
        double hdeg = 0.5 *( h*60 + m );
        double mdeg = m*6;
        double res = abs(hdeg - mdeg);
        if(res>180) res = 360 - res;
        printf("%.3lf\n",res);
    }
    return 0;
}


