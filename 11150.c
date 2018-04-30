#include <stdio.h>

int main()
{
    int N,count;
    while(scanf("%d",&N) != EOF ){
        count = N + N/2;
        printf("%d\n", count);
    }
    return 0;
}
