#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    long long int a,b;
    char y[100000];
    while(scanf("%lld%s%lld",&a,y,&b) != EOF ){
        if( *y == '%'){
            printf("%lld\n",a%b);
        }
        else if( *y == '/' ){
            printf("%lld\n",a/b);
        }
    }
    return 0;
}
