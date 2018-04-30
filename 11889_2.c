#include <stdio.h>

int main()
{
    int i,a,c,t;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            int b = 0;
            scanf("%d%d",&a,&c);
            b = c / a;
            if(c%a==0){
                printf("%d\n",b);
            }
            else{
                printf("NO SOLUTION\n");
            }
        }
    }
    return 0;
}

