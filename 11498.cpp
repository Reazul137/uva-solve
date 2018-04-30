#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int k,n,m,x,y,i;
    while(scanf("%d",&k)!=EOF){
        scanf("%d%d",&n,&m);
        for(i=1;i<=k;i++){
            scanf("%d%d",&x,&y);
            if(x>n){
                if(y>m){
                    printf("NE\n");
                }
                else if(y<m){
                    printf("SE\n");
                }
                else{
                    printf("divisa\n");
                }

            }
            else if(x<n){
                if(y>m){
                    printf("NO\n");
                }
                else if(y<m){
                    printf("SO\n");
                }
                else{
                    printf("divisa\n");
                }

            }
            else{
                printf("divisa\n");
            }
        }
    }
    return 0;
}
