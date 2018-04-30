#include <bits/stdc++.h>

using namespace std;
int ar[50001][3] = {0}, flag[50001] = {1},i,j,k;

int main()
{
    int t,n;
    for(i = 0; i*i <= 50000; i++){
        for(j = 0; j*j <= 50000; j++){
            for(k = 0; k*k <= 50000; k++){
                int sum = i*i + j*j + k*k;
                if(sum > 50000) break;
                if(flag[sum] == 0){
                    ar[sum][0] = i, ar[sum][1] = j, ar[sum][2] = k,flag[sum] == 1;
                }
            }
        }
    }
    cin>>t;
    for(int test = 0; test < t; test++){
        cin>>n;
        if(ar[n][0] || ar[n][1] || ar[n][2]){
            cout<<ar[n][0]<<" "<<ar[n][1]<<" "<<ar[n][2]<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
