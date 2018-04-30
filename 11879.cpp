#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    int i,j,sum,reminder,length;
    char arr[1000];
    while(gets(arr)){
        reminder = 0;
        length = strlen(arr);
        if(length==1 && arr[0]=='0') break;
        for(i=0;i<length;i++){
            sum = reminder*10 + (arr[i] - '0');
            reminder = sum % 17;
        }
        if(reminder == 0)
            printf("1\n");
        else
            printf("0\n");
        }
    return 0;
}
