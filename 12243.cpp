#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    while(getline(cin,s) && s !="*"){
        char st = tolower(s[0]);
        int l = s.length();
        bool chk = true;
        for(int i = 1; i < l - 1; i++){
            if(s[i] == ' '){
                if(st != tolower(s[i+1])){
                    chk = false;
                }
            }
        }
        if(chk) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}

