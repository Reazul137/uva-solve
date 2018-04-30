#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    double l,w,d,tot,weight;
    while(scanf("%d",&tc) != EOF){
        int  allow = 0;
        for(int i = 0; i < tc; i++){
            scanf("%lf%lf%lf%lf",&l,&w,&d,&weight);
            tot = l + w + d;
            int flag = 0;
            if(l <= 56 && w <= 45 && d <= 25){
                flag += 1;
            }
            else if(tot <= 125.00){
                flag += 1;
            }
            if(weight <= 7.00){
                flag += 1;
            }
            if( flag == 2){
                allow += 1;
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        printf("%d\n",allow);
    }
    return 0;
}
