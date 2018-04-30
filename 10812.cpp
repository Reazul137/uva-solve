#include <iostream>
#include<cstdio>

using namespace std;
int main()
{
    int T,i;
    unsigned int s,d,sum,dif;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%u%u",&s,&d);
        if(s>=d && (s+d)%2==0){
            sum = (s+d)/2;
            dif = (s-d)/2;
            printf("%u %u\n",sum,dif);
        }
        else{
            printf("impossible\n");
        }
    }

    return 0;
}

