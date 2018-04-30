#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,d,i;
    while(scanf("%lld%lld",&n,&d)!= EOF){
        long long int res = 0;
        for(i = n; ; i++){
            res += i;
            if(res > d || res == d){
                printf("%lld\n",i);
                break;
            }
        }
    }
    return 0;
}

