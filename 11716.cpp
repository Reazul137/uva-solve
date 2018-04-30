#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
int main()
{
    string ar;
    int i,j,t,k;
    char a;
    while(scanf("%d%c",&t,&a)!=EOF){
        for(i=0;i<t;i++){
            getline(cin,ar);
            int l = ar.length();
            int sq = sqrt(l);
            if(sq*sq == l){
                for(j=0; j<sq; j++){
                    for(int m = j;m<l; m+=sq){
                        cout<<ar[m];
                    }
                }
                cout<<endl;
            }
            else{
                cout<<"INVALID"<<endl;
            }
        }
    }
    return 0;
}
