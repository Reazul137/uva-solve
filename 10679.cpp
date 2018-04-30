#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    int i,j,k,q,m,l;
    char a[100010],b[1010];
    while(scanf("%d",&k) != EOF){
        for(i=1;i<=k;i++){
            scanf("%s",&a);
            int len1 = strlen(a);
            printf("%d\n",len1);
            scanf("%d",&q);
            for(j=1;j<=q;j++){
                scanf("%s",&b);
                int pass = 0;
                int len2 = strlen(b);
                printf("%d\n",len2);
                if(len2>len1){
                    printf("n\n");
                    continue;
                }
                else{
                    for(m=0;m<len2;m++){
                        for(l=0;l<len1;l++){
                            if(b[m]==a[l]){
                                pass++;
                            }

                        }
                    }
                    printf("p: %d\n",pass);
                    if(pass==len2){
                        printf("y\n");
                    }
                    else{
                        printf("n\n");
                    }
                }
            }
        }
    }

    return 0;
}
