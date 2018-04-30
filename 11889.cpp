#include <iostream>

using namespace std;
int main()
{
    int i,a,c,t;
    while(cin>>t){
        for(i=1;i<=t;i++){
            int b = 0;
            cin>>a>>c;
            b = c / a;
            if(c%a==0){
                cout<<b<<endl;
            }
            else{
                cout<<"NO SOLUTION"<<endl;
            }
        }
    }
    return 0;
}
