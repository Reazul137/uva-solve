#include <iostream>

using namespace std;
int main()
{
    int T,i,s,d;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d",&s,&d);
        if(s<d){
            printf("impossible\n");
        }
        else{
            sum = (s+d)/2;
            dif = sum - d;
            printf("%d %d\n",sum,dif);
        }
    }

    return 0;
}
