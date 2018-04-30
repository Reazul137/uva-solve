#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    unsigned long long int n,i;
    unsigned long long int ara[100000];
    char str[100000];
    while(scanf("%lu",&n)!=EOF){
        if(n==0) break;
        ara[1] = 1;
        ara[2] = 1;
        printf("num %lu\n",n);
        for(i=2;i<=n;i++){
            ara[i] = ara[i-1] + ara[i-2];
            str[i] = ara[i];
        }

        printf("%s\n",str[n]);
    }
    return 0;
}


