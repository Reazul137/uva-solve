#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n){
    if(n <= 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3;i <= n/ i;i += 2)
        if(n % i == 0) return false;

    return true;
}

int main()
{
    char a[25];
    while(scanf("%s",a) != EOF){
        int l = strlen(a);
        int n = 0;
        for(int i = 0; i < l; i++){
            if(a[i] >= 'a' && a[i] <= 'z'){
                n += a[i] - 'a' + 1;
            }
            else{
                n += a[i] - 'A' + 27;
            }
        }
        puts(is_prime(n)? "It is a prime word." : "It is not a prime word.");
    }
}
