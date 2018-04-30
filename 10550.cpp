#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int a,b,c,d,A,B,C;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!= EOF){
        if(a==0 && b==0 && c==0 && d==0) break;
        if(a<b){
            A = (a+40)-b;
        }
        else{
            A = a - b;
        }
        if(c<b){
            B = (c+40) - b;
        }
        else{
            B = c - b;
        }
        if(c<d){
            C = (c+40) - d;
        }
        else{
            C = c - d;
        }
        cout<<1080+A*9+B*9+C*9<<endl;
    }
    return 0;
}

