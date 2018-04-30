#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int e,f,c,t,i,n,div,extra,result;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&e,&f,&c);
        n = e+f;
        result = 0;
        while(n>=c)
        {
            div = n/c;
            extra = n%c;
            result += div;
            n = div+ extra;
        }
        printf("%d\n",result);
    }
    return 0;
}
