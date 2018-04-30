#include <iostream>
#include <cstdio>
#include <math.h>
#define PI acos(-1.0)

using namespace std;
int main()
{
    double r,n;
    double area;
    while(scanf("%lf%lf",&r,&n)!=EOF){
        area = (n*r*r*sin((2*PI)/n))/2;
        printf("%.3lf\n",area);
    }
    return 0;
}
