#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n==0) break;
        int output=0,m=0;
        while(n>=3){
            output += n/3;
            n = n/3 + n % 3;
        }
        if(n==2){
            output++;
        }
        printf("%d\n",output);
    }
    return 0;
}
