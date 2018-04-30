#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
int main()
{
    int t,st,n,num;
    char ch[110];
    int a[1000];
    while(cin>>t){
        while(t--){
            cin>>st;
            int p = 0;
            for(int i=1; i<=st; i++){
                scanf("%s",ch);
                if(strcmp(ch,"LEFT")==0){
                    p += -1;
                    a[i] = -1;
                }
                else if(strcmp(ch,"RIGHT")==0){
                    p += 1;
                    a[i] = 1;
                }
                else{
                    scanf("%s%d",ch,&num);
                    p += a[num];
                    a[i] = a[num];
                }
            }
            cout<<p<<endl;
        }
    }
    return 0;
}

