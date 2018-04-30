#include <bits/stdc++.h>

using namespace std;
int par[1000000];
int fnd(int u){
	if(par[u]==u) return u;
	int k = fnd(par[u]);
	par[u] = k;
	return k;
}
int main()
{
    int k,l,n,m,x,y,x1,y1,t=1;
    while(scanf("%d%d",&n,&m)==2){
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
        k = 0;
        for(int i = 1; i <= n; i++){
            if(par[i] == i){
                cout<<"par "<<par[i];
               k++;
            }
        }
        cout<<endl;
        printf("Case %d: %d\n",t,k);
        t++;
    }
    return 0;
}

