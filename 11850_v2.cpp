#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;
int main()
{
    int r,a,i,d[1425];
    while(scanf("%d",&a)==1)
    {
        if(a==0) break;

        for(i=0;i<a;i++)
        {
          scanf("%d",&d[i]);
        }
        sort(d,d+a,greater<int>());

        for(i=0;i<a;i++)
        {
          printf("%d ",d[i]);
        }
    }
    return 0;
}

