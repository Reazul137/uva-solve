#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tc,n;
    while(scanf("%d",&tc) != EOF){
        if(tc == 0) break;
        int flag = 0, maxi = 0;
        for(int i = 0; i < tc; i++){
            scanf("%d",&n);
            flag += n;
            if(flag > maxi){
                maxi = flag;
            }
            else if(flag < 0 ){
                flag = 0;
            }
        }
        if(maxi > 0){
            printf("The maximum winning streak is %d.\n",maxi);
        }
        else{
            printf("Losing streak.\n");
        }


    }
    return 0;
}
