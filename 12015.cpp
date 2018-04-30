#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    char s[10][100];
    int a[20];
    int n;
    while(cin>>n){
        for(int i=1; i<=n; i++){
            int flg = 0;
            for(int j=0; j<10; j++){
                scanf("%s%d",&s[j],&a[j]);
                if(a[j]>flg){
                    flg = a[j];
                }
            }
            printf("Case #%d:\n",i);
            for(int j=0; j<10; j++){
                if(a[j] == flg){
                    printf("%s\n",s[j]);
                }
            }
        }
    }
    return 0;
}
