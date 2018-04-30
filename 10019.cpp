#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,tc,bi,hx,bresult, hresult;
    scanf("%d",&tc);
    for(int i = 0; i < tc; i++){
        scanf("%d",&n);
        bi = n, hx = n,bresult = 0, hresult = 0;
        int mod;
        while(bi != 0){
            mod = bi % 2;
            if( mod == 1){
                bresult++;
            }
            bi /= 2;
        }
        while(hx != 0){
            mod = hx % 10;
            if( mod == 1 || mod == 2 || mod == 4 || mod == 8){
                hresult += 1;
            }
            else if(mod == 3 || mod == 5 || mod == 6 || mod == 9){
                hresult += 2;
            }
            else if( mod == 7){
                hresult += 3;
            }
            hx /= 10;
        }
        printf("%d %d\n",bresult, hresult);
    }
    return 0;
}
