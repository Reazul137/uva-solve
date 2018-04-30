#include <stdio.h>

int main()
{
    int N,i;
    for(i=1;i<=250000;i++){
        scanf("%d",&N);
        if(N==0) break;
        if(N<=100) printf("f91(%d) = 91\n",N);
        else if(N>100) printf("f91(%d) = %d\n",N,N-10);
    }

    return 0;
}
