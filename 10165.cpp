#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,x,r;
    while(scanf("%d",&n) != EOF){
        if(n == 0) break;
        r = 0;
        for(int i  = 0; i < n; i++){
            scanf("%d",&x);
            r ^= x;
        }
        if(r == 0) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
