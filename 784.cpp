#include <bits/stdc++.h>

using namespace std;
char ar[102][102];
void dfs(int x,int y){
    if(ar[x][y]==' ' || ar[x][y] == '*'){
        ar[x][y] = '#';
        dfs(x,y+1);
        dfs(x,y-1);
        dfs(x+1,y);
        dfs(x-1,y);
        dfs(x+1,y+1);
        dfs(x+1,y-1);
        dfs(x-1,y+1);
        dfs(x-1,y-1);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        int n = 0;
        while(gets(ar[n])){
            if(ar[n][0] == '_'){
                break;
            }
            n++;
        }
        for(int i = 0; i < n; i++){
            int l = strlen(ar[i]);
            for(int j = 0; j < l ; j++){
                if(ar[i][j] =='*'){
                    dfs(i,j);
                }
            }
        }
        for(int i = 0; i <= n; i++){
            puts(ar[i]);
        }
    }
    return 0;
}

