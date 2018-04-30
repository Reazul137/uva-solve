#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;
int main()
{
    int i;
    double a,b,c,s,area;
    for(i=1;i<=1000;i++){
        scanf("%lf%lf%lf",&a,&b,&c);
        s = (a+b+c)/2;
        if(s>a && s>b && s>c){
            area = 4.0/3.0 * sqrt(s*(s-a)*(s-b)*(s-c));
            printf("%.3lf\n",area);
        }
        else{
            printf("-1.000\n");
        }
    }
    return 0;
}
