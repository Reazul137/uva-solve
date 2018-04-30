#include <stdio.h>

int main()
{
    long long A,L;
    int count,step = 0;
    while(scanf("%lld %lld",&A,&L)!= EOF){
        if(A<0 && L<0 ) break;
        count = 0;
        long long a=A;
        while(A>1){
            if(A%2 != 0){
                A = 3*A + 1;
            }
            else {
                A = A/2;
            }
            if(A>L) break;
            count ++;
        }
        step++;
        printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",step,a,L,count+1);

    }

    return 0;
}

