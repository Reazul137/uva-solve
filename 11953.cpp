#include <bits/stdc++.h>

using namespace std;
int i,j,k,m,n;
char ar[102][102];
void dfs(int x,int y){
    if( x>=0 && x< n && y>=0 && y< n && ( ar[x][y]=='x' || ar[x][y] == '@')){
        ar[x][y] = '.';
        dfs(x,y+1);
        dfs(x,y-1);
        dfs(x+1,y);
        dfs(x-1,y);
//        dfs(x+1,y+1);
//        dfs(x+1,y-1);
//        dfs(x-1,y+1);
//        dfs(x-1,y-1);
    }
}

int main()
{
    cin>>m;
    for(int f = 1; f <=m; f++){
            cin>>n;
            getchar();
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    cin>>ar[i][j];
                }
            }
            getchar();
            //cout<<"bb"<<endl;
            for(k=0,i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(ar[i][j]=='x'){
                        k++;
                        dfs(i,j);
                    }
                }
            }
            printf("Case %d: %d\n",f,k);
    }
    return 0;
}
