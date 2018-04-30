#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tc,ara[500010];
    scanf("%d",&tc);
    for(int i = 0; i < tc; i++){
        int res = 0, j = 0;
        while(scanf("%d",&ara[j])){
            if(ara[j] == 0) break;
            j++;
        }
        sort(ara, ara+j, greater<int>());
        for(int k = 0; k < j; k++){
            res += 2 * pow(ara[k],k+1);
            if(res > 5000000){
                break;
            }
        }
        if(res < 5000000){
            printf("%d\n",res);
        }
        else{
            printf("Too expensive\n");
        }
    }
    return 0;
}
