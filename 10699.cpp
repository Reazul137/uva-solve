#include <bits/stdc++.h>

using namespace std;
int factorsize,n;
int prime[4800],num[1000],factor[40];
int k;
void sieve()
{
    prime[0] = 2;
    k = 1;
    for(int i = 3; i <= 1000; i += 2)
    {
        if(num[i] == 0)
        {
            prime[k] = i;
            for(int j = 2*i; j <= 1000; j += i)
            {
                num[j] = 1;
            }
            k++;
        }
    }
}

void primefactor(long long int n)
{
    factorsize = 0;
    int sq = sqrt(n);
    for(int i = 0; prime[i] <= sq; i++)
    {
        if( n % prime[i] == 0){

            factorsize++;
            while(n % prime[i] == 0)
            {
                n /= prime[i];
            }
        }
        if(n == 1) break;
    }
    if(n>1)
    {
        factorsize++;
    }
}
int main()
{
    sieve();
    while(scanf("%d",&n)!=EOF)
    {
        if(n == 0) break;
        if(n == 1){
            printf("%d : 0\n",n);
            continue;
        }
//        memset(factor, 0, sizeof factor);
//        primefactor(n);
        int co = 0;
        for(int i = 0; i < k; i++){
            if(n % prime[i] == 0){
                co++;
                while(n % prime[i] == 0)
                {
                    n /= prime[i];
                }
                if(n == 1) break;
            }
        }
        if(n>1)
        {
            co++;
        }
        printf("%d : %d\n",n,co);
    }
    return 0;
}

