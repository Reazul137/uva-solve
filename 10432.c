#include <iostrem>
#include <cstdio>
#include <math.h>
#define PI acos(-1.0)

using namespace std;
int main()
{
    int r,n;
    double area;
    while(scanf("%d%d",&r,&n)!=EOF){
        area = (n*r*r)/2*sin((2*PI)/n);
        printf("%.3lf",area);
    }
    return 0;
}
