#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int A;
    int count=0;
    while(scanf("%s",&a)!=EOF){
        count++;
        A = strlen(a);
        if( A == 1) break;
        if( A == 4){
            printf("Case %d: Hajj-e-Akbar\n",count);
        }
        else if( A == 5){
            printf("Case %d: Hajj-e-Asghar\n",count);
        }
    }
    return 0;
}
