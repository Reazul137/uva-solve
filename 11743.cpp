#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    char a[20],b[20],c;
    scanf("%d",&n);
    scanf("%c",&c);
    for(int i = 0; i < n; i++){
        gets(a);
        int l = strlen(a);
        int k = 0;
        for(int j = 0; j <= l; j++){
            if(a[j] != ' ' && a[j] != '\0'){
                b[k] = a[j];
                k++;
            }
        }
        int total = 0;
        for(int j = 0; j< 16; j += 2){
            int mul = (b[j] - '0') * 2;
            if(mul>9){
                int mod = mul %10;
                int div = mul / 10;
                total += mod + div;
            }
            else{
                total += mul;
            }
        }
        for(int j = 1; j < 16; j += 2){
            total += (b[j] - '0');
        }
        if(total%10 == 0){
            printf("Valid\n");
        }
        else{
            printf("Invalid\n");
        }
    }
    return 0;
}
