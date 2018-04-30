#include <stdio.h>

int main(){
    int N,M;
    while(scanf("%d %d",&N,&M) != EOF ){
        int cuts = ( N * M ) -1;
        printf("%d\n",cuts);
    }
    return 0;
}
