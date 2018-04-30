#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,d,r;
    int mor[110],aft[110];
    while(scanf("%d%d%d",&n,&d,&r) != EOF){
        if( n == 0 && d == 0 && r == 0) break;
        for(int i = 0; i < n; i++){
            scanf("%d",&mor[i]);
        }
        sort(mor,mor+n);
        for(int i = 0; i < n; i++){
            scanf("%d",&aft[i]);
        }
        sort(aft,aft+n, greater<int>());
        int ovr = 0, pay = 0;
        for(int i = 0; i < n; i++){
            ovr = mor[i] + aft[i];
            if(ovr > d){
                pay += (ovr - d)*r;
            }
        }
        printf("%d\n",pay);
    }
}

