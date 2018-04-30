#include <bits/stdc++.h>

using namespace std;

int prime(long long int n)
{
    int i;
    if(n<2)return 0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int rev (long long int n)
{
    int revv = 0;
    while(n!=0)
    {
        revv = revv * 10;
        revv = revv + n%10;
        n = n/10;
    }
    return revv;
}

int main()
{
    long long int n;
    while(1)
    {
        scanf("%lld",&n);
        printf("%lld\n",2*n);
        if(rev(n)==n)
        {
            if(prime(rev(n)))
                break;
        }
    }
}
