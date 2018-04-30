#include <bits/stdc++.h>

using namespace std;
int main()
{
    int test_case;
    long long int n;
    while(scanf("%d",&test_case)==1){
        for(int i = 0; i < test_case; i++){
            scanf("%lld",&n);
            if(n==0) break;
            long long m = n;
            long long int flag = 0;
            int r = 0, j = 1;
            while(1){
                r += j;
                n -= j;
                if(n<0) break;
                j++;
                flag++;
                if(r>=m) break;
            }
            printf("%lld\n",flag);
        }
    }
    return 0;
}

