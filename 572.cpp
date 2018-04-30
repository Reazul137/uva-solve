#include <bits/stdc++.h>

using namespace std;
int i,j,k,m,n;
char ar[102][102];
void dfs(int x,int y){
    if( x>=0 && x< m && y>=0 && y< n && ar[x][y]=='@'){
        ar[x][y] = '*';
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
    while(cin>>m>>n && m!=0 && n!=0){
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin>>ar[i][j];
            }
        }
        for(k=0,i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(ar[i][j]=='@'){
                    k++;
                    dfs(i,j);
                }
            }
        }
        printf("%d\n",k);
    }
    return 0;
}

/*DFS Code
int xx[] = {-1, 0, 0, 1};
int yy[] = {0,-1, 1, 0};

void dfs(int j,int k)
{

    int a,x,y;

    for(a=0; a<4; a++)
    {
        x=j+xx[a];
        y=k+yy[a];

        if(ar[x][y]==' ')
        {
            ar[x][y]='#';
            dfs(x,y);

        }
    }
    return ;
}

*/
