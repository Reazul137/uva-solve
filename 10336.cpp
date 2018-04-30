#include <bits/stdc++.h>

using namespace std;
char ar[110][110], ch;
int m,n;
struct ALPHA
{
    int num;
    char ch;
}al[30];


bool cmp(ALPHA a, ALPHA b){
    return (a.num>b.num || (a.num == b.num && a.ch < b.ch));
}
void dfs(int u, int v) {
    if (u<0 || u>=m || v<0 || v>=n || ar[u][v]!=ch) return;

    ar[u][v] = '*';
    dfs(u-1, v); dfs(u, v-1);
    dfs(u+1, v); dfs(u, v+1);
}
int main()
{
    int test;
    cin>>test;
    for(int t = 0; t < test; t++){
        cin>>m>>n;
        getchar();
        for(int i = 0; i < m; i++){
            gets(ar[i]);
        }

        for(int i = 0; i < 26; i++){
            al[i].num = 0;
            al[i].ch = i + 97;
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(ar[i][j] != '*'){
                    ch = ar[i][j];
                    dfs(i,j);
                    al[ch-97].num++;
                }
            }
        }

        sort(al, al+26, cmp);

        printf("World #%d\n",t+1);

        int i = 0;
        while(i < 26 && al[i].num != 0){
            printf("%c: %d\n",al[i].ch,al[i].num);
            i++;
        }
    }
    return 0;
}
