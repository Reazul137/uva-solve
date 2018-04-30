#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>
#include <string.h>

using namespace std;
int main()
{
    int n,taka,frd,round,div;
    string s[100],people_name,frd_name;
    map <string, int> gift;
    int p=0;
    while(scanf("%d",&n)== 1){
        for(int i=0; i<n; i++){
            cin>>s[i];
            gift[s[i]] = 0;
        }
        for(int i=0; i<n; i++){
            cin>>people_name;
            cin>>taka>>frd;
            if(frd!=0){
                div = taka/frd;
                round = div*frd;
                for(int j=0; j<frd; j++){
                    cin>>frd_name;
                    gift[frd_name] += div;
                }
                gift[people_name]-=round;
            }
        }
        if(p!=0) printf("\n");
        for(int i=0; i<n; i++){
            cout<<s[i]<<" "<<gift[s[i]]<<endl;
        }
        p++;
    }
    return 0;
}
