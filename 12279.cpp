#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int T,n,i,flag=0;
    while(scanf("%d",&T)!=EOF){
        if(T==0) break;
        int party = 0,treat = 0;
        for(i=1;i<=T;i++){
            scanf("%d",&n);
            if(n>0){
                party++;
            }
            else{
                treat++;
            }
        }
        flag++;
        printf("Case %d: %d\n",flag,party-treat);

    }
    return 0;
}
