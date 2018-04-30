#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
int main()
{
    string ar;
    int t;
    char x,a;
    while(scanf("%d%c",&t,&x)!=EOF){
        for(int i=1;i<=t;i++){
            getline(cin,ar);
            int l = ar.length();
            cout<<"Case "<<i<<": ";
            for(int j=0 ; j<l; j++){
                int f = 0;
                if(ar[j]>='A'&& ar[j]<='Z'){
                        a = ar[j];
                }
                else if(ar[j]>='0' && ar[j]<='9'){
                    f = ar[j]-'0';
                    j++;
                    while(ar[j]>='0' && ar[j]<='9'){
                        f = f*10 + ar[j]-'0';
                        j++;
                    }
                    j--;
                    for(int k=1; k<=f; k++){
                        cout<<a;
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

