#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tc,n,s[30010];
    scanf("%d",&tc);
    for(int i = 0; i < tc; i++){
        int p = 50000000;
        scanf("%d",&n);
        for(int j = 0; j < n; j++){
            scanf("%d",&s[j]);
        }
        sort(s,s+n);
        for(int j = 0; j < n; j++){
            int sum = 0;
            for(int k = 0; k < n; k++){
                sum += abs(s[j] - s[k]);
            }
            p = min(sum,p);
        }
        printf("%d\n",p);
    }
    return 0;
}
