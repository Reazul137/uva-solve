#include <stdio.h>

int main()
{
    int a,b,c;
    long long int p,x,y;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if( a == 0 && b == 0 && c == 0) break;
        if(a>=b&&a>=c){
            p = a;
            x = b;
            y = c;
        }

        else if(b>=a&&b>=c){
            p = b;
            x = a;
            y = c;
        }

        else if(c>=a && c >= b){
            p = c;
            x = a;
            y = b;
        }

        if( p*p == (x*x + y*y) ){
            printf("right\n");
        }
        else printf("wrong\n");
    }
    return 0;
}
