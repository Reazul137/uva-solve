#include <stdio.h>
#include <math.h>

int main()
{
    int T,i;
    double tmax,tmin,P,v,u,d;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lf %lf %lf",&d,&v,&u);
        if((v>=u)||(v<=0)||(u<=0)||(d<=0)){
            printf("Case %d: can't determine\n",i);
        }
        else{
            tmax = d/sqrt(u*u-v*v);
            tmin = d/u;
            P = tmax - tmin;
            printf("Case %d: %.3lf\n",i,P);
        }
    }
    return 0;
}
