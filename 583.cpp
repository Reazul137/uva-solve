#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll factorsize,n;
ll prime[4800],num[46350],factor[40];
void sieve()
{
    prime[0] = 2;
    int k = 1;
    for(int i = 3; i <= 46350; i += 2)
    {
        if(num[i] == 0)
        {
            prime[k] = i;
            cout<<prime[k]<<" ";
            for(int j = 2*i; j <= 46350; j += i)
            {
                num[j] = 1;
            }
            k++;
        }
    }
}

void primefactor(ll n)
{
    factorsize = 0;
    int sq = sqrt(n);

    for(int i = 0; prime[i] <= sq; i++)
    {
        while(n % prime[i] == 0)
        {
            n /= prime[i];
            factor[factorsize] = prime[i];
            factorsize++;
        }
        if(n == 1) break;
    }
    if(n>1)
    {
        factor[factorsize] = n;
        factorsize++;
    }
}
int main()
{
    sieve();
    while(scanf("%lld",&n)!=EOF)
    {
        if(n == 0) break;
        printf("%lld = ",n);
        if(n<0)
        {
            printf("-1 x ");
            n = -1*n;
        }
        memset(factor, 0, sizeof factor);

        primefactor(n);
        for(int i = 0; i < factorsize; i++)
        {
            printf("%lld",factor[i]);
            if(i != (factorsize - 1 ))
            {
                printf(" x ");
            }
        }
        printf("\n");
    }
    return 0;
}
///2147483648
