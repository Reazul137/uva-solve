#include <bits/stdc++.h>

using namespace std;
int par[1000000];
int ara[1000000];
int fnd(int u){
	if(par[u]==u) return u;
	int k = fnd(par[u]);
	par[u] = k;
	return k;
}
int main()
{
    int k,l,n,m,x,y,x1,y1,t;
    scanf("%d",&t);

    while(t--){
        scanf("%d%d",&n,&m);
        if(n==0 && m==0) break;
        for(int i = 1; i <= n; i++){
            par[i] = i;
        }
        for(int i = 0; i < m; i++){
            scanf("%d%d",&x,&y);
            x1 = fnd(x);
            y1 = fnd(y);
            cout<<"x1 "<<x1<<endl;
            cout<<"y1 "<<y1<<endl;
            if(x1 != y1){
                par[x1] = y1;
                cout<<"par[x1] "<<par[x1]<<endl;
            }
        }

        for(int i = 1; i <= n; i++){
            k = fnd(par[i]);
            ara[k]++;
            printf("%d ar parent %d\n",i,k);
        }
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum = max(sum, ara[i]);
        }
        printf("%d\n",sum);
        memset(ara,0, sizeof ara);
    }
    return 0;
}
