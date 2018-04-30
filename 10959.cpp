#include <bits/stdc++.h>

using namespace std;
vector<int>v[2000];
queue<int>q;
int vis[2000];
int main()
{
    int t,x,y,i,j,n,m;
    while(scanf("%d",&t)!= EOF){
        for(i = 0; i < t; i++){
            if(i > 0){
                printf("\n");
            }
            scanf("%d%d",&n,&m);
            memset(vis,0,sizeof vis);
            for(j = 0; j< m; j++){
                scanf("%d%d",&x,&y);
                v[x].push_back(y);
                v[y].push_back(x);
            }
            cout<<endl;
            vis[0] = 0;
            q.push(0);
            while(! q.empty()){
                int u = q.front();
                int l = v[u].size();
                for(j = 0; j < l; j++){
                    int vc = v[u][j];
                    if(vis[vc] == 0){
                        vis[vc] = vis[u] + 1;
                        q.push(vc);
                    }
                }
                cout<<endl;
                q.pop();
            }
            for(j = 0; j < n; j++){
                if(j>0){
                   printf("%d\n",vis[j]);
                }
                v[j].clear();
                vis[j] = 0;
            }
        }
    }
    return 0;
}
