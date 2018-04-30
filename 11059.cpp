#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,s,a[10000], flag = 0;
    while(scanf("%d",&n)==1)
    {
        int i,j,k,a[n];
        for(i=0; i<n; i++) scanf("%d",&a[i]);
        long long max=0;
        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                long long pro = 1;
                for (k = i; k <= j; k++)
                {
                    pro*=a[k];
                }
                if(max<pro)
                    max = pro;
            }
        }
        flag++;
        printf("Case #%d: The maximum product is %lld.\n\n",flag,max);
    }
    return 0;
}
