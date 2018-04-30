#include <iostream>
#include<algorithm>
#include <cstdio>

long long int n[3000000],i,j,t;
using namespace std;
int main()
{
    while(scanf("%d",&t)!=EOF){
        if(t==0) break;
        for(i=0;i<t;i++){
            scanf("%d",&n[i]);
        }
        sort(n,n+t);
        for(i=0;i<t;i++){
            printf("%d",n[i]);
            if(i<t-1){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
