#include <bits/stdc++.h>

using namespace std;
int main()
{
    int test_case;
    long long int n,sum;
    while(scanf("%d",&test_case)==1){
        for(int i = 0; i < test_case; i++){
            scanf("%lld",&n);
            sum = (-1 + sqrt(1+8*n))/2;
            printf("%lld\n",sum);
        }
    }
    return 0;
}
