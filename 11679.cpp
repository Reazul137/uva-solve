#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int b,n,d,c,v,r[30];
    while(cin>>b>>n){
        if(!b && !n) break;
        for(int i=1;i<=b;i++){
            scanf("%d",&r[i]);
        }
        for(int j=1;j<=n;j++){
            scanf("%d%d%d",&d,&c,&v);
            r[c] += v;
            r[d] -= v;
        }
        int flag = 0;
        for(int j=1;j<=b;j++){
            if(r[j]<0){
                flag++;
            }
        }
        if(flag>0){
            printf("N\n");
        }
        else{
            printf("S\n");
        }

    }
    return 0;
}
