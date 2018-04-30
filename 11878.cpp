#include <bits/stdc++.h>

using namespace std;

int main()
{
    int flag = 0, a,b;
    char sign,c[1000];
    while(scanf("%d%c%d=%s",&a,&sign,&b,c) == 4){
        if(sign == '+'){
            if(a + b == atoi(c)){
                flag++;
            }
        }
        else if(sign == '-'){
            if(a - b == atoi(c)){
                flag++;
            }
        }
    }
    printf("%d\n",flag);
    return 0;
}


