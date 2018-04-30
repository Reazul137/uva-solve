#include <iostream>
#include <cstdio>
#include <math.h>
#define PI 3.1416

using namespace std;
int main()
{
    double r,n;
    double area;
    while(scanf("%d%d",&r,&n)!=EOF){
        if(r>0 && r<20000 && n>2 && n<20000){
        area = (n*r*r)/2*sin((2*PI)/n);
        printf("%.3lf\n",area);
        }
    }
    return 0;
}

