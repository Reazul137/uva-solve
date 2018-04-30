#include <bits/stdc++.h>

using namespace std;
long long int happy( long long int x)
{
    long long int mod,sum;
    while(x != 0){
        sum = 0;
        while(x != 0){
            mod = x % 10;
            sum += mod * mod;
            x /= 10;
            if(x == 0){
                x = sum;
                break;
            }
        }
//        cout<<"x "<<x<<endl;
        if(x <= 9){
            break;
        }
    }
    return x;
}
int main()
{
    long long int n,tc;
    while(scanf("%lld",&tc) != EOF){
        for(int i = 1; i <= tc; i++)
        {
            scanf("%lld",&n);
            if( n <= 9 && n != 1 && n != 7)
            {
                printf("Case #%d: %lld is an Unhappy number.\n",i,n);
            }
            else if(n != 1 && n != 7)
            {
                long long int res = happy(n);
                if(res == 1 || res == 7)
                {
                    printf("Case #%d: %lld is an Happy number.\n",i,n);
                }
                else
                {
                    printf("Case #%d: %lld is an Unhappy number.\n",i,n);
                }
            }
            else
            {
                printf("Case #%d: %lld is an Happy number.\n",i,n);
            }
        }
    }
    return 0;
}

