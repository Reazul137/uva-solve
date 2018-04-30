#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
void ban(long long int n){
    if(n>=10000000){
        ban(n/10000000);
        printf(" kuti");
        n %= 10000000;
    }
    if(n>=100000){
        ban(n/100000);
        printf(" lakh");
        n %= 100000;
    }
    if(n>=1000){
        ban(n/1000);
        printf(" hajar");
        n %= 1000;
    }
    if(n>=100){
        ban(n/100);
        printf(" shata");
        n %= 100;
    }
    if (n)
        printf (" %d",n);
}
int main()
{
    long long n;
    int tc=1;
    while(cin>>n){
        printf("%4d.",tc++);
        if (n==0) printf(" 0");
        ban(n);
        printf("\n",n);
    }
    return 0;
}
