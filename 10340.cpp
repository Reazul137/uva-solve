#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s,t;
    while(cin>>s>>t){
        int sl = s.length();
        int tl = t.length();
        int flag = 0;
        for(int i =0; i < tl && flag < sl; i++){
            if(t[i] == s[flag]){
                flag++;
            }
        }
        if(flag == sl ){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
