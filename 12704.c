#include <stdio.h>
#include <math.h>

int main()
{
    int T,i;
    scanf("%d",&T);
    double x,y,r,X,Y,result;
    for(i=1;i<=T;i++){
        scanf("%lf%lf%lf",&x,&y,&r);
        X = (0-x);
        Y = (0-y);
        result = sqrt(X*X+Y*Y);
        printf("%.2lf %.2lf\n",r-result,r+result);
    }
    return 0;
}
