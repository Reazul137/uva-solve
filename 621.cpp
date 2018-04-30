#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;
int main()
{
    int t,a;
    string ar;
    while(cin>>t){
        for(int i=0; i<t; i++){
            cin>>ar;
            a = ar.length();
            if(ar=="1"||ar=="4"||ar=="78"){
                cout<<"+"<<endl;
            }
            else if(ar[a-1]=='5' && ar[a-2]=='3'){
                cout<<"-"<<endl;
            }
            else if(ar[a-1]=='4' && ar[0]=='9'){
                cout<<"*"<<endl;
            }
            else if(ar[0]=='1' && ar[1]=='9' && ar[2]=='0'){
                cout<<"?"<<endl;
            }
            else{
                cout<<"?"<<endl;
            }
        }
    }
    return 0;
}



