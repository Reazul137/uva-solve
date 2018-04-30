#include <stdio.h>


int main()
{
    long long int i,j,m,l,count,a,b,x,Y,e,f,A;
    while(scanf("%lld %lld",&i,&j)!= EOF){
        long long int ara[j];
        if( i == 0 && j == 0 ) break;
        if(i> j){
            a = i;
            b= j;
        }
        else  {
            a = j;
            b = i;
        }
        for(m=b;m<=a;m++){
            x = m;
            count = 0;
            while(x>1){
                if(x%2 != 0){
                    x = 3*x + 1;
                }
                else {
                    x = x/2;
                }
                count ++;
            }
            ara[m] = count;
        }
            Y = 0;
            for(l=b;l<=a;l++){
                if(ara[l]>Y){
                    Y = ara[l];
                    A = l;
                }
            }
        printf("\nBetween %lld and %lld, %lld generates the longest sequence of %lld values.\n",i,j,A,Y);

    }

    return 0;
}

