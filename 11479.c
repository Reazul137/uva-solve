#include <stdio.h>

int main()
{
    int i,T;
    long long int a,b,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c&&a+c>b&&b+c>a){
            if(a==b && a== c){
                printf("Case %d: Equilateral\n",i);
            }
            else if((a==b && a!=c)||(b==c&&a!=b)||(c==a&&c!=b)){
                printf("Case %d: Isosceles\n",i);
            }
            else if(a!=b && a!=c){
                printf("Case %d: Scalene\n",i);
            }

        }
        else{
            printf("Case %d: Invalid\n",i);
        }
    }
    return 0;
}
