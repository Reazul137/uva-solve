#include <bits/stdc++.h>

using namespace std;
bool cmp(string x, string y)
{
    string t1 = x + y;
    string t2 = y + x;
    if( t1 > t2) return true;
    return false;
}
int main()
{
    int n;
    string ar[60];
    while(scanf("%d",&n) != EOF){
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            cin>>ar[i];
        }
        sort(ar, ar + n, cmp);
        for(int i = 0; i < n; i++){
            cout<<ar[i];
        }
        printf("\n");

    }
    return 0;
}
