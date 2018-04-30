#include <bits/stdc++.h>

using namespace std;
struct val
{
    char a;
    int v;
}value[110];

int main()
{
    int n,k,m;
    char c;
    char line[10100];
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&k);
        getchar();
        for(int j = 0; j < k; j++){
            scanf("%c%d%c",&value[j].a,&value[j].v,&c);
        }
//        for(int j = 0; j < k; j++){
//            printf("%c %d\n",value[j].a,value[j].v);
//        }
        scanf("%d",&m);
        getchar();
        int amount = 0;
        for(int j = 0; j < m; j++){
            gets(line);
            int l = strlen(line);
//            cout<<"l "<<l<<endl;
            for(int x = 0; x < k; x++){
                for(int y = 0; y < l; y++){
                    if(value[x].a == line[y]){
                        amount += value[x].v;
                    }
                }
            }
//            cout<<"taka "<<amount<<endl;
        }
        double usd = (double)amount/100;
        printf("%0.2lf$\n",usd);
    }
    return 0;
}
