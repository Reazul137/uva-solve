#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,p[20200];
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        scanf("%d",&n);
        for(int j = 0; j < n; j++){
            scanf("%d",&p[j]);
        }
        sort(p,p+n, greater<int>());
//        for(int j = 0; j < n; j++){
//            printf("%d ",p[j]);
//        }
//        cout<<endl;
        long long int dis = 0;
        for(int j = 2; j < n; j += 3){
            dis += p[j];
        }
        printf("%lld\n",dis);
    }
}
