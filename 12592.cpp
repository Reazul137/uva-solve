#include <bits/stdc++.h>

using namespace std;
struct line
{
    char pro[110];
    char next[110];
}num[25];
int main()
{
    int t,n;
    char r[110];
    scanf("%d",&t);
    getchar();
    for(int i = 0; i < t; i++){
        gets(num[i].pro);
        gets(num[i].next);
    }
    scanf("%d",&n);
    getchar();
    for(int i = 0; i < n; i++){
        gets(r);
        for(int j = 0; j < t; j++){
            if(strcmp(num[j].pro,r)==0){
                cout<<num[j].next<<endl;
                break;
            }
        }
    }
    return 0;
}
