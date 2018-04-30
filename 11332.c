#include <stdio.h>

int main(){
    long long int a,b,c;

    while( scanf("%lld",&a) != EOF ){
        if ( a == 0 ){
            break;
        }
        if(a < 9){
            printf("%lld\n",a);
        }
        else{
            while(a>9){
                b = a%10;
                c = a/10;
                a = b + c;
            }
            printf("%lld\n",a);
        }
    }
    return 0;
}
