#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!= EOF){
        if(n == 0) break;
        int ar[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%d",&ar[i][j]);
            }
        }
        int r = 0, c = 0, e = 0, f = 0;
        for(int i = 0; i < n; i++){
            int sum1 = 0;
            for(int j = 0; j < n; j++){
                sum1 += ar[i][j];
            }
            if(sum1 % 2 == 1){
                r = i;
                e++;
            }
        }
        for(int i = 0; i < n; i++)
        {
            int sum2 = 0;
            for(int j = 0; j < n; j++)
            {
                sum2 += ar[j][i];
            }
            if(sum2 % 2 == 1)
            {
                c = i;
                f++;
            }
        }
        if(e == 0 && f == 0){
            printf("OK\n");
        }
        else if(e == 1 && f == 1){
            printf("Change bit (%d,%d)\n",r+1,c+1);
        }
        else{
            printf("Corrupt\n");
        }
    }
    return 0;
}
