#include <iostream>
#include <math.h>
#include <cstring>
#include <cstdio>

using namespace std;
int main()
{
    char num[10000];
    while(gets(num)){
        if(strcmp(num,"0")==0){
            break;
        }
        int result = 0;
        int k = strlen(num);
        for(int j=0;j<strlen(num);j++){
            result += (num[j]-'0')*(pow(2,k)-1);
            k--;
        }
        cout<<result<<endl;
    }
    return 0;
}
