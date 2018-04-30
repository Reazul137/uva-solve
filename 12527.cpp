#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x;
    bool arr[10];
    while(cin>>n>>m){
        int flag = 0;
        for(int i = n; i <= m; i++){
            memset(arr,0,sizeof(arr));
            x = i;
            while(x){
                if(arr[x%10]){
                    flag--;
                    break;
                }
                else{
                    arr[x%10] = true;
                    x /= 10;
                }
            }
            flag++;
        }
        cout<<flag<<endl;
    }
    return 0;
}

