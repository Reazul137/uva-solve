#include <stdio.h>

int main()
{
    int i,j,l,n,h[10000],ara[10000],sum;
    int k;
    int z = 0;
    while(scanf("%d",&n) != EOF){
        z = z + 1;
        sum = 0;
        k = 0 ;
        if( n == 0) break;
        for(i=0;i<n;i++){
            scanf("%d",&h[i]);
            sum = sum + h [i];
        }
        int average = sum/n;
            for(l=0;l<n;l++){
                if(h[l]>average){
                    k = k + ( h[l] - average );
                }
            }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",z,k);
    }
    return 0;
}
