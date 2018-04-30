#include <bits/stdc++.h>

using namespace std;

#define PI acos(-1.0)

int main() {
    int tc;
    double d,l;
    scanf("%d",&tc);
    for(int i = 0; i < tc; i++){
        scanf("%lf%lf",&d,&l);
        double a = l/2;
        double b = sqrt((l/2)*(l/2) - (d/2)*(d/2));
        double area = PI * a * b;
        printf("%.3lf\n",area);
    }
	return 0;
}


