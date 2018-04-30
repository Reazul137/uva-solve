#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n;
    char s[2010];
    cin>>t;
    while(t--){
        cin>>n;
        getchar();
        gets(s);
        int tem = 0;
        for(int i = 0; s[i]; i++){
            tem = tem*10 + s[i] - '0';
            tem %= n;
        }
        cout<<tem<<endl;
    }
    return 0;
}
