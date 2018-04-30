#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int main()
{
    long long n,x=8,fl=0;
    double n2;
    while(true){
        n2 = sqrt((x*x+x)/2);
        n = n2;
        if(n==n2){
            printf("%10lld%10lld\n",n,x);
            fl++;
        }
        if(fl==10) break;
        x++;
    }
    return 0;
}


//int main()
//{
//    int n,a,b,i;
//    while(cin>>a>>b){
//        n = 0;
//        for(i=a;i<=b;i++){
//            n += i;
//        }
//        cout<<n<<endl;
//    }

