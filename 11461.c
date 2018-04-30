#include <stdio.h>
#include <math.h>

int main()
{
    int i,a,b,j,J,count;
    for(i=1;i<=201;i++){
        scanf("%d %d",&a,&b);
        if( a == 0 && b == 0) break;
        count = 0;
        for(j=a;j<=b;j++){
            J = sqrt(j);
            if(J*J == j){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
