#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    double n, tax;
    scanf("%d",&tc);
    for(int i = 1; i <= tc; i++){
        scanf("%lf",&n);
        if(n <= 180000){
            tax = 0;
        }
        else if ( n > 180000 && n <= 480000){
            n -= 180000;
            tax = n * 0.10;
        }
        else if( n > 480000 && n <= 880000){
            n -= 480000;
            tax = n * 0.15 + 30000;
        }
        else if( n > 880000 && n <= 1180000){
            n -= 880000;
            tax = n * 0.20 + 30000 + 60000;
        }
        else if( n > 1180000 ){
            n -= 1180000;
            tax = n * 0.25 + 30000 + 60000 + 60000;
        }
        if(tax < 2000 && tax > 0){
            tax = 2000;
        }
        printf("Case %d: %.0lf\n",i,ceil(tax));
    }
    return 0;
}
