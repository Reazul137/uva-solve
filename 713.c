#include <stdio.h>

int rev(int x)
{
    int reverse=0;
    while(x!=0){
        reverse = reverse*10 + x%10;
        x = x / 10;
    }

    return reverse;
}

int main()
{
    int N,i;
    int a,b,A,B,z,Z;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d %d",&a,&b);
        z = rev(a) + rev(b);
        if ( z == 0 ) break;
        Z = rev(z);
        printf("%d\n",Z);
    }

    return 0;
}
