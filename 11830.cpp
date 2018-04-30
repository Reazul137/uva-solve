#include <bits/stdc++.h>

using namespace std;
int main()
{
    string d, n;
    while(cin>>d>>n){
        if(d.compare("0") == 0 && n.compare("0") == 0) break;
        int l = n.length();
        int fl = 0;
        char c;
        for(int i = 0; i < l; i++){
            if(d[0] != n[i]){
                fl++;
                c = n[i];
                printf("%c",n[i]);
            }
            if( fl == 1 && c == '0') break;
        }
        if(fl == 0) cout<<"0";
        cout<<endl;
    }
    return 0;
}

