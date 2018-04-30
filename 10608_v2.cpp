#include <bits/stdc++.h>

using namespace std;
vector <int> v[30000];
int vis[30000];
int bfs(int x)
{
    queue<int>q;
    q.push(x);
    vis[x] = 1;
    int cont = 0;
    while( !q.empty()){
        int u = q.front();
        q.pop();
        int l = v[u].size();
        for(int j = 0; j < l; j++){
            int vc = v[u][j];
            if(vis[vc] == 0){
                vis[vc] = 1;
                q.push(vc);
            }
        }
        cont ++;
    }
    return cont;
}
int main()
{
    int n,m,a,b,i,j,tc;
    scanf("%d",&tc);
    for(int i = 0; i < tc; i++){
        scanf("%d%d",&n,&m);
        for(int j = 0; j < m; j++){
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        memset(vis, 0, sizeof vis);
        int mx = 0;
        for(int j = 0; j < n; j++){
            if(vis[j] == 0){
                mx = max(mx,bfs(j));
            }
        }
        for(int j = 0; j < n; j++){
            v[j].clear();
            vis[j] = 0;
        }
        printf("%d\n",mx);
    }

    return 0;
}
