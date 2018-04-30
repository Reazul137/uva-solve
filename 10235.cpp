#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n){
    if(n <= 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3;i <= n/ i;i += 2)
        if(n % i == 0) return false;

    return true;
}

int rev(int n)
{
    int rever = 0;
    while (n != 0)
    {
      rever *= 10;
      rever += n%10;
      n/= 10;
    }
    return rever;
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        if( !is_prime(n)) printf ("%d is not prime.\n", n);
        else{
            int r = rev(n);
            if( r == n){
                printf ("%d is prime.\n", n);
            }
            else if(is_prime(r)){
                printf ("%d is emirp.\n", n);
            }
            else{
                printf ("%d is prime.\n", n);
            }
        }
    }
    return 0;
}

