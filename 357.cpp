#include<bits/stdc++.h>

using namespace std;

//#define N 30002
//
//static long long a[30002];
//static const long long coins[4] = {5, 10, 25, 50};

int main(){
//    register unsigned long long i, j;
//    long long n;
    long long int i,j,n;
    long long int a[30002];
    long long int coins[4] = {5, 10, 25, 50};
    for(i = 0; i < 30002; ++i)
        a[i] = 1;

    for(i = 0; i < 4; ++i){
        for(j = coins[i]; j < 30002; ++j)
            a[j] += a[j - coins[i]];
    }

    while(scanf("%lld", &n) == 1){
        if(a[n] == 1)
            printf("There is only %lld way to produce %lld cents change.\n", a[n], n);
        else
            printf("There are %lld ways to produce %lld cents change.\n", a[n], n);
    }
    return 0;
}
