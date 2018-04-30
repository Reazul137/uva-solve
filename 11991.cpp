#include <bits/stdc++.h>

using namespace std;
vector<int>vec[1000010];
int a[1000010];

int main()
{
    int n,m,k,v;
    while(scanf("%d%d",&n,&m) == 2){
        for(int i = 0; i < 1000010; i++){
            vec[i].clear();
        }
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
            vec[a[i]].push_back(i+1);
        }
        for(int i = 0; i < m; i++){
            scanf("%d%d",&k,&v);
            if(vec[v].size()<k){
                printf("0\n");
            }
            else{
                printf("%d\n",vec[v][k-1]);
            }
        }
    }
    return 0;
}
