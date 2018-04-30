#include <bits/stdc++.h>

using namespace std;
int hortal[3655];
int main()
{
    int p,a[110],N,tc;
    scanf("%d",&tc);
    for(int i = 0; i < tc; i++){
        scanf("%d",&N);
        scanf("%d",&p);
        memset(hortal, 0, sizeof hortal);
        for(int j = 0; j < p; j++){
            scanf("%d",&a[j]);
        }
        int cnt = 0;
        for(int j = 1; j <= N; j++){
            if( j % 7 == 6 || j % 7 == 0) continue;
            if(hortal[j] == 0){
                for(int k = 0; k < p; k++){
                    if(j % a[k] == 0){
                        hortal[j] = 1;
                    }
                }
            }
            if(hortal[j] == 1){
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }

    return 0;
}
