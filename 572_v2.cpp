#include <bits/stdc++.h>

using namespace std;
char ar[110][110];
int m,n;
void dfs(int x, int y){
    if(x >= 0 && y >= 0 && x < m && y < n && ar[x][y] == '@'){
        ar[x][y] = '*';
        dfs(x, y+1);
        dfs(x, y-1);
        dfs(x+1, y-1);
        dfs(x+1, y+1);
        dfs(x-1, y+1);
        dfs(x-1, y-1);
        dfs(x-1, y);
        dfs(x+1, y);
    }
}
int main()
{
    while(cin>>m>>n && m != 0 && n != 0){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin>>ar[i][j];
            }
        }
        int k = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(ar[i][j] == '@'){
                    k++;
                    dfs(i,j);
                }
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
