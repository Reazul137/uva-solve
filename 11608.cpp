#include <bits/stdc++.h>

using namespace std;
int main()
{
    int cr[15],re[14], flag = 0,n;
    while(scanf("%d",&n)!= EOF){
        if(n < 0) break;
        cr[0] = n;
        for(int i = 1; i < 13; i++){
            scanf("%d",&cr[i]);
        }
        for(int i = 0; i < 12; i++){
            scanf("%d",&re[i]);
        }

        printf("Case %d:\n",++flag);

        for(int i = 0; i < 12; i++){
            if(cr[i] - re[i] >= 0){
                cr[i+1] += cr[i] - re[i];
                printf("No problem! :D\n");
            }
            else{
                cr[i+1] += cr[i];
                printf("No problem. :(\n");
            }
        }
    }
    return 0;
}

