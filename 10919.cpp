#include <bits/stdc++.h>

using namespace std;
int main()
{
    int k,m,c,r;
    int ark[1000], arc[1000];
    while(scanf("%d%d",&k,&m) == 2){
        if( k == 0) break;
        for(int i = 0; i < k; i++){
            scanf("%d",&ark[i]);
        }
        int flag = 0, res = 0;
        for(int i = 0; i < m; i++){
            scanf("%d%d",&c,&r);
            for(int j = 0; j < c; j++){
                scanf("%d",&arc[j]);
                for(int l = 0; l < k; l++){
                    if(arc[j] == ark[l]){
                        flag++;
                        break;
                    }
                }
            }
//            cout<<"flag "<<flag<<endl;
            if( flag >= r) res++;
            flag = 0;
        }
//        cout<<"res "<<res<<endl;
        if( res == m) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
