#include <iostream>
#include <cstdio>
#define pf printf
#include <cstring>

using namespace std;
int main()
{
    char a[133];
    while(gets(a))
    {
        int l = strlen(a);
        int flag = 0;
        for(int i=0;i<l;i++){
            if(a[i]>=49&&a[i]<=59){
                flag += a[i] - 48;
            }
            else if(a[i]=='b'){
                for(int j=1;j<=flag;j++){
                    pf(" ");
                }
                flag = 0;
            }
            else if(a[i]=='!'){
                pf("\n");
            }
            else{
                for(int k=1;k<=flag;k++){
                    pf("%c",a[i]);
                }
                flag = 0;
            }
        }
        pf("\n");
    }
    return 0;
}
