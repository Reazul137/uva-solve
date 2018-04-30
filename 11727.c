#include <stdio.h>

int main(){
    int T,a,b,c,i;
    scanf("%d",&T);
    for(i=1 ; i <=T;i++){
        scanf("%d %d %d",&a,&b,&c);
        if ( (b > a && b < c) | (b < a && b > c)) printf("Case %d: %d\n",i,b);
        else if (( a > b && a < c)|( a < b && a > c)) printf("Case %d: %d\n",i,a);
        else if ((c < b && c > a)|(c > b && c < a)) printf("Case %d: %d\n",i,c);
    }
    return 0;
}
