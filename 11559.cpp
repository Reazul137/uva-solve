#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int n,b,h,w,p,r,total,amount;
    while(cin>>n>>b>>h>>w){
        int cost= 20000000;
        for(int i=0; i<h; i++){
            scanf("%d",&amount);
            for(int j= 0; j<w ; j++){
                scanf("%d",&r);
                if(r>=n){
                    p = n*amount;
                    if(cost>p){
                        cost = p;
                    }
                }
            }
        }
        if(cost<=b){
            printf("%d\n",cost);
        }
        else{
            printf("stay home\n");
        }
    }
    return 0;
}
