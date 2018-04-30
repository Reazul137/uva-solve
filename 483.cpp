#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    int i,p,j,a;
    char s[100000];
    while(gets(s)){
        int len = strlen(s);
        a = -1;
        for(i=0;i<len;i++){
            if(s[i]==' '){
                for(j=i-1;j>a;j--){
                    cout<<s[j];
                }
                cout<<" ";
                a = i;
            }
        }
        for(i=len-1;i>a;i--){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

