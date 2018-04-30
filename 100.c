#include <stdio.h>

int ara[1000000];

int main()
{
    int i,j,m,l,count,a,b,x,Y,e,f;
    while(scanf("%d %d",&i,&j)!= EOF){
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
            ara[m] = count+1;
        }
            Y = 0;
            for(l=b;l<=a;l++){
                if(ara[l]>=Y){
                    Y = ara[l];
                }
            }
        printf("%d %d %d\n",i,j,Y);

    }

    return 0;
}
