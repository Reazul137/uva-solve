#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;
int main()
{
    char s[1000000];
    int T,i,j,z,flag,maximum,minimum,x;
    flag = 1;
    while(scanf("%s",s)!= EOF ){
        int length = strlen(s);
        if(length==0) break;
        scanf("%d",&T);
        printf("Case %d:\n",flag);
        for(z=1;z<=T;z++){
            scanf("%d%d",&i,&j);
            if(i>=j){
                maximum = i;
                minimum = j;
            }
            else {
                maximum =j;
                minimum = i;
            }
            int counter = 0;
            for(x=minimum;x<maximum;x++){
                if(s[x]==s[x+1]){
                    counter++;
                }
            }
            if( counter == (maximum-minimum)){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        flag++;
    }

    return 0;
}
