#include <iostream>

using namespace std;
int main()
{
    int a,b,ab,ab2;
    while(cin>>a>>b){
        if(a==-1 && b==-1){
            break;
        }
        if(a>=b){
            ab = a - b;
            ab2 = 99 - a + b + 1;
        }
        else if(b>=a){
            ab = b - a;
            ab2 = 99 - b + a + 1;
        }
        if(ab>=ab2){
            cout<<ab2<<endl;
        }
        else{
            cout<<ab<<endl;
        }

    }
    return 0;
}
