#include <bits/stdc++.h>

using namespace std;
#define N 1000000
int prime[N];

void sieve(){
    memset(prime, 1, sizeof prime);
    prime[0] = prime[1] = 0;
    int len = sqrt(N);
    for(int i = 2; i <= len; ++i){
        if(prime[i]){
            for( int k = i * i; k <= N; k += i )
                prime[k] = 0;
        }
    }
    prime[2] = 0;

}

int main() {
    sieve();
    int n;
    while(scanf("%d", &n) != EOF){
        if(n == 0) break;
        for(int a = 3; a < n; a++){
            if( prime[a] ){
                int b = n - a;
                if( prime[b] ){
                    printf("%d = %d + %d\n", n, a, b);
                    break;
                }

            }
        }

    }


    return 0;
}
