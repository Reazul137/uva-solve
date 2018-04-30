#include <stdio.h>

int main()
{
    int i,T;
    scanf("%d",&T);
    double c,d,result;
    for(i=1;i<=T;i++){
        scanf("%lf%lf",&c,&d);
        result = (5*d)/9 + c;
        printf("Case %d: %.2lf\n",i,result);
    }
    return 0;
}
