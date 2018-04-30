#include <stdio.h>

int main(){
    long long int h,o;
    while( scanf("%lld %lld",&h,&o) != EOF ){
        if(o>h)   printf("%lld\n",o-h);
        else printf("%lld\n",h-o);
    }
    return 0;
}
