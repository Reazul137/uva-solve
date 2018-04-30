#include <stdio.h>

int main()
{
    int test,lenght,height,i,j,k,l,m,n;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d %d",&lenght,&height);
        //scanf("%d",&f);
        for(j=1;j<=height;j++){
            for(k=1;k<=lenght;k++){
                for(m=1;m<=k;m++){
                    printf("%d",k);
                }
                printf("\n");
            }
            for(l=lenght-1;l>=1;l--){
                for(n=1;n<=l;n++){
                    printf("%d",l);
                }
                printf("\n");
            }
            if(j!= (height-1)) printf("\n");
        }
        if(i!= (test-1)) printf("\n");
    }
    return 0;
}
