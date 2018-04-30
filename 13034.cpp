#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,a[13];
    while(scanf("%d",&n) != EOF){
        for(int j = 1; j <= n; j++){
            int flag = 0;
            for(int i = 0; i < 13; i++){
                scanf("%d",&a[i]);
                if(a[i] > 0) flag++;
            }
            if( flag == 13) printf("Set #%d: Yes\n",j);
            else printf("Set #%d: No\n",j);
        }
    }
    return 0;
}

