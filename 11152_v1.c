#include <iostream>
#include <cstdio>
#include <string.h>
#define PI 3.141692654;

using namespace std;
int main()
{
    double a,b,c,A,B,R,r,sunflowers,violets,roses,big,bigc;
    while(scanf("%lf%lf%%lf",&a,&b,&c)!=EOF){
        if(a>b && a>c){
            R = a;
            A = b;
            B = c;
        }
        else if(b>c && b>a){
            R = b;
            A = a;
            B = c;
        }
        else {
            R = c;
            A = a;
            B = b;
        }
        bigc = PI*R*0.5*R*0.5;
        sunflowers = bigc - 0.5*A*B;
        r = bigc / (0.5*(a+b+c));
        roses = PI*r*r;
        violets = 0.5*A*B - roses;
        printf("%.4lf %.4lf %.4lf\n",sunflowers,violets,roses);

    }
    return 0;
}

