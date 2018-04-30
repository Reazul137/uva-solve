#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    char c;
    char str[120];
    while(scanf("%d",&n) != EOF){
        if(n == 0) break;
        scanf("%c%s",&c,str);
        int l = strlen(str);
        int div = l/n,a;
        for(int i = 1; i <= n; i++){
            a = i*div;
            for(int j = a-1 ; j >= a-div ;j--){
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
