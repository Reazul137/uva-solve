#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;
/*int main()
{
    int T,i,result=0,k;
    char a[1000],r[1000];
    while(scanf("%d",&T)!= EOF){
        result = 0;
        for(i=1;i<=T;i++){
            scanf("%s",a);
            if(strcmp(a,"donate")==0){
                scanf("%d",&k);
                result += k;
            }
            if(strcmp(a,"report")==0){
                printf("%d\n",result);
            }

        }
    }
    return 0;
}*/
int main ()
{
    int testCase; scanf ("%d", &testCase);
    char input [100];
    int totalAmount = 0;
    int inputAmount;

    while ( testCase-- ) {

        scanf ("%s", input);

        if ( strcmp (input, "donate") == 0 ) {
            scanf ("%d", &inputAmount);
            totalAmount += inputAmount;
        } else {
            printf ("%d\n", totalAmount);
        }
    }

    return 0;

}
