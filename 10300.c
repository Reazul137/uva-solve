#include <stdio.h>

int main()
{
    long long int n,f,i,j,s,a,e;
    long long int result,r;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&f);
        result = 0;
        for(j=1;j<=f;j++){
            scanf("%lld%lld%lld",&s,&a,&e);
            r = s*e;
            result = result + r;
        }
        printf("%lld\n",result);
    }
    return 0;
}
