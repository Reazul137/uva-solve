#include <bits/stdc++.h>

using namespace std;
int a[10010],b[10010];
int main()
{
    int n, q, flag = 0;
    while(scanf("%d%d",&n,&q)!= EOF){
        if(n  == 0 && q == 0 ) break;
        for(int i = 0; i < n; i++) scanf("%d",&a[i]);
        for(int i = 0; i < q; i++) scanf("%d",&b[i]);
        sort(a , a + n);
        printf("CASE# %d:\n",++flag);
        for(int i = 0; i < q; i++){
            int k  = 0;
            for(int j = 0; j < n; j++){
                if(b[i] == a[j] && k != 1){
                    printf("%d found at %d\n",b[i],j+1);
                    k++;
                }
            }
            if( k == 0){
                printf("%d not found\n",b[i]);
            }
        }
    }
    return 0;
}
