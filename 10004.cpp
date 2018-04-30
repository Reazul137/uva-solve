#include <bits/stdc++.h>

using namespace std;
int main()
{
    int node, edge, a, b;
    vector<int> vc[100000];
    int num[10000];
    memset(num,-1,sizeof(num));
    while(cin>>node){
        if(node == 0) break;
        cin>>edge;
        for(int i = 0; i < edge; i++){
            cin>>a>>b;
            vc[a].push_back(b);
            vc[b].push_back(a);
        }

        queue<int>q;
        int f = 0, x;
        num[0] = 0;
        q.push(0);
        while(!q.empty()){
            x = q.front();
            q.pop();
            int l = vc[x].size();
            for(int i = 0; i < l; i++){
                if(num[vc[x][i]] == -1){
                    if(num[x] == 0){
                        num[vc[x][i]] = 1;
                    }
                    else{
                        num[vc[x][i]] = 0;
                    }
                    q.push(vc[x][i]);
                }
                else{
                    if(num[vc[x][i]] == num[x]){
                        f = 1;
                        break;
                    }
                }
            }
            if(f == 1) break;
        }

        if( f == 1) cout<<"NOT BICOLORABLE.\n";
        else cout<<"BICOLORABLE.\n";
        for(int i=0;i<node;i++)
        vc[i].clear();
        q=queue<int>();
    }

}
