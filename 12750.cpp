#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n;
    char c;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%d",&n);
        getchar();
        int cnt = 0, ans = 0;
        int flag = 1;
        for(int j = 0; j < n; j++)
        {
            scanf("%c",&c);
            getchar();
            if( flag == 0) continue;
            else if( c == 'W'){
                cnt  = 0;
            }
            else{
                cnt++;
                if( cnt == 3){
                    flag = 0;
                }
            }
            ans++;
        }
        printf("Case %d: ",i);
        if(flag == 0){
            printf("%d\n",ans);
        }
        else{
            printf("Yay! Mighty Rafa persists!\n");
        }
    }
    return 0;
}
