#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,t;
    double ha, hb, hc;
    while(scanf("%d",&n) != EOF){
        t = 0;
        while( t != n){
            scanf("%lf%lf%lf",&ha,&hb,&hc);
            if( ha <= 0 || hb <= 0 || hc <= 0){
                printf("These are invalid inputs!\n");
                t++;
                continue;
            }
            double A = 1/ha;
            double B = 1/hb;
            double C = 1/hc;
            double total = 1/ ((A+B+C)*(-A+B+C)*(A+B-C)*(A-B+C));
            if(total < 0){
                t++;
                printf("These are invalid inputs!\n");
            }
            else{
                printf("%0.3lf\n",sqrt(total));
            }

        }
    }
    return 0;
}
