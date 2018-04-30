#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    long long int l,u,num;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld",&l,&u);
        int high = 0;
        for(int i = l; i <= u; i++){
            int divisor = 0;
            double p = pow(i,0.5);
            for(int j = 1; j <= p; j++){
                if(i % j == 0){
                    divisor++;
                    if( j < p) divisor++;
                }
            }
            if( high < divisor){
                high = divisor;
                num = i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %d divisors.\n",l,u,num,high);
    }
    return 0;
}
