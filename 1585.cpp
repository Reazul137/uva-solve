#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    string a;
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>a;
            int l = a.length();
            int cnt = 0,x = 1;
            for(int j=0;j<l; j++){
                if(a[j]=='O'){
                    cnt += x;
                    if(j+1<l && a[j+1]=='O'){
                        x++;
                    }
                    else{
                        x = 1;
                    }
                }
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}
