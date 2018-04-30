#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int n;
    int count = 0;
    while(scanf("%d",&n)!=EOF){
        if(n==0) break;
        int N = n / 2;
        count += 1;
        printf("Case %d: %d\n",count,N);
    }
    return 0;
}

