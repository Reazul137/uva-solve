#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int n;
    long long int a[20] = {1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786, 208012, 742900, 2674440, 9694845, 35357670, 129644790, 477638700, 1767263190};
    while(scanf("%lld",&n) != EOF){
        for(int i = 0; i < 19; i++){
            if( n == a[i]){
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
