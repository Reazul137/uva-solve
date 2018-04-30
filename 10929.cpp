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
            reminder = sum % 11;
        }
        if(reminder == 0)
            //printf("%s is a multiple of 11.\n",arr);
            cout<<arr<<" is a multiple of 11."<<endl;
        else
            //printf("%s is not a multiple of 11.\n",arr);
            cout<<arr<<" is not a multiple of 11."<<endl;
        }
    return 0;
}

