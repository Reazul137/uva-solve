#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    getchar();
    while(n--){
        getline(cin,s);
        int l = s.size();
        stack<char>stk;
        if(l % 2 != 0){
            printf("No\n");
            continue;
        }
        for(int i = 0; i < l; i++){
            if(s[i] == ')' && !stk.empty() && stk.top() == '('){
                stk.pop();
            }
            else if(s[i] == ']' && !stk.empty() && stk.top() == '['){
                stk.pop();
            }
            else {
                stk.push(s[i]);
            }
        }
        if(stk.empty()){
            printf("Yes\n");
        }
        else printf("No\n");
    }
    return 0;
}
