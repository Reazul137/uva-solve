#include <bits/stdc++.h>

using namespace std;
int main()
{
    double n,p,x;
    while(scanf("%lf%lf",&n,&p)!=EOF){
        x = exp(log(p)/n);
        printf("%.0lf\n",x);
    }
    return 0;
}
