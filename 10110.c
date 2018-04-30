#include <stdio.h>
#include <math.h>

int main()
{
    long long int n,i,a;
    while(scanf("%lld",&n)!=EOF){
        if(n==0) break;
        a = n;
        i = sqrt(n);
        if(i*i == a){
            printf("yes\n");
        }
        else printf("no\n");
    }
    return 0;
}
