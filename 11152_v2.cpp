#include <iostream>
#include <cstdio>
#include <string.h>
#include <math.h>
#define pi 3.141592653589793

using namespace std;
int main()
{
    double a,b,c,A,R,r,s,sunflowers,violets,roses;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
        s = 0.5*(a+b+c);
        A = sqrt(s*(s-a)*(s-b)*(s-c));
        R = (a*b*c)/(4*A);
        r = A/s;
        sunflowers = pi*pow(R,2) - A;
        violets = A - pi*pow(r,2);
        roses = pi*pow(r,2);
        printf("%.4lf %.4lf %.4lf\n",sunflowers,violets,roses);

    }
    return 0;
}

