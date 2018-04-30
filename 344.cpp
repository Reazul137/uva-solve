#include <iostream>

using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0) break;
        int i = 0,v = 0, x = 0, l = 0, c = 0;
        for(int j=1;j<=n;j++){
            int divd = j/10;
            if(divd<4) x+= divd;
            else if(divd == 4){
                x++; l++;
            }
            else if(divd == 9){
                x++; c++;
            }
            else{
                l++; x+=divd-5;
            }
            int mod = j%10;
            if(mod<4) i+=mod;
            else if(mod==4){
                i++,v++;
            }
            else if(mod==9){
                i++,x++;
            }
            else{
                i+= mod - 5, v++;
            }
        }
        cout<<n<<": "<<i<<" i, "<<v<<" v, "<<x<<" x, "<<l<<" l, "<<c<<" c"<<endl;
    }
    return 0;
}
