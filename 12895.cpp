#include <bits/stdc++.h>

using namespace std;
int power(long long int n, int x)
{
    long long int p = n;
    for(int i = 1; i < x; i++){
        n *= p;
    }
    return n;
}
int main()
{
    int tc;
    long long num;
    int mod;
    scanf("%d",&tc);
    for(int i = 1; i <= tc; i++){
        scanf("%lld",&num);
        long long int res = 0;
        int digit = 0;
        long long int n = num, m = num;
        while(num != 0){
            mod = num % 10;
            digit++;
            num /= 10;
        }
        cout<<digit<<endl;
        while(n != 0){
            mod = n % 10;
            n /= 10;
            cout<<mod<<endl;
            res += power(mod,digit);
            cout<<"pow "<<power(mod,digit)<<endl;
            cout<<res<<endl;
        }
        if( res == m ){
            printf("Armstrong\n");
        }
        else{
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
