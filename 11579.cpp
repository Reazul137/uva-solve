#include <bits/stdc++.h>

using namespace std;
double area (double x, double y, double z)
{
    if ( x + y < z || x + z < y || y + z < x ) return 0;
    double area = x + y + z;
    area /= 2;

    cout<<"ar "<<area<<endl;

    return sqrt (area * (area - x) * (area - y) * (area - z));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double a[10000+10];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        double res = 0;
        for(int i = n - 1; i>= 2; i--)
        {
            res = max(res, area(a[i],a[i-1],a[i-2]));
        }
        printf("%0.2lf\n",res);
    }

    return 0;
}


