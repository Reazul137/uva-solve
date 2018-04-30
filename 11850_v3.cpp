#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;
int main()
{
    int r,a,i,d[1425];
    while(cin>>a)
    {
        if(a==0) break;

        for(i=0;i<a;i++)
        {
          cin>>d[i];
        }
        sort(d,d+a,greater<int>());

        for(i=0;i<a;i++)
        {
          cout<<d[i]<<endl;
        }
        cout<<d<<endl;
    }
    return 0;
}


