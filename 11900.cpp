#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tc,n,p,q,e[50];
    scanf("%d",&tc);
    for(int i = 1; i <= tc; i++){
        scanf("%d%d%d",&n,&p,&q);
        for(int j = 0; j < n; j++){
            scanf("%d",&e[j]);
        }
        int flag = 0, w = 0, res = 0;
        for(int j = 0; j < n; j++){
            flag++;
            if(flag <= p){
                w += e[j];
                if(w <= q){
                    res++;
                }
            }
        }
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
