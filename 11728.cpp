#include <bits/stdc++.h>

using namespace std;
int fac[1001];
void factorial()
{
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                fac[i] += j;
            }
        }
    }

}
int main()
{
    factorial();
    int n, tc = 0, i;
    while(scanf("%d",&n) != EOF){
        if( n  == 0) break;
        int flag = 0;
        for(i = 1000; i >= 1; i--){
            if(fac[i] == n){
                flag++;
                break;
            }
        }
        if(flag == 1){
            printf("Case %d: %d\n",++tc,i);
        }
        else{
            printf("Case %d: -1\n",++tc);
        }
    }
    return 0;
}
