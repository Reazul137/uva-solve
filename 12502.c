#include <stdio.h>

int main()
{
    int T,i,x,y,z;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d%d",&x,&y,&z);
        if(x<1 || y>10){
            break;
        }

        int X_Pay = ((x+(x-y))*z)/(x+y);
        printf("%d\n",X_Pay);
    }
    return 0;
}
