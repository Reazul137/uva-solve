#include <bits/stdc++.h>

using namespace std;
int main()
{
    int l;
    string s;
    while(cin>>l && l > 0){
        cin>>s;
        int mind = l;
        int lastd = -l, lastr = -l;
        for(int i = 0; i < l; i++){
            if(s[i] == 'Z'){
                mind = 0;
                break;
            }
            else if(s[i] == 'D'){
                mind = min(mind, i - lastr);
                lastd = i;
            }
            else if(s[i] == 'R'){
                mind = min(mind, i - lastd);
                lastr = i;
            }
        }

        cout<<mind<<endl;
    }
    return 0;
}
