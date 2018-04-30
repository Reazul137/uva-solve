#include <bits/stdc++.h>

using namespace std;
int wi[1000000];
int main()
{
    int tc,m,w;
    scanf("%d",&tc);
    for(int i = 0; i < tc; i++){
        scanf("%d%d",&m,&w);
        for(int j  = 0; j < m; j++){
            scanf("%d",&wi[j]);
        }
        long long int totalw = 0;
        int flag = 0;
//        sort(wi,wi+m);
        for(int j  = 0; j < m; j++){
            totalw += wi[j];
            if(totalw >= w){
                break;
            }
            flag++;

        }
        printf("%d\n",flag);

    }
    return 0;
}
