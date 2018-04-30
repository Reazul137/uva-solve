#include <iostream>

using namespace std;
int main()
{
    int h1,h2,h,m1,m2,m;
    while(cin>>h1>>m1>>h2>>m2){
        if(h1==0 && m1==0 && h2==0 && m2==0) break;
        if(m2<m1){
            h2 -= 1;
            m2 += 60;
            m = m2 - m1;
        }
        else{
            m = m2 - m1;
        }
        if(h2<h1){
            h2 += 24;
            h = h2 - h1;
        }
        else {
            h = h2 - h1;
        }
        int res = m + h*60;
        cout<<res<<endl;
    }
    return 0;
}
