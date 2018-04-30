#include <stdio.h>
const double PI  =3.141592653589793238463;
//#define pi acos(-1.00)
int main ()
{
    int i,T;
    scanf("%d",&T);
    double L,W,R,red,green;
    for(i=1;i<=T;i++){
        scanf("%lf",&L);
        W = (6*L) / 10;
        R = (2*L) / 10;
        red = PI * R * R;
        green = L * W - red;
        printf("%.2lf %.2lf\n",red, green);
    }
    return 0;
}
