#include <bits/stdc++.h>

using namespace std;
int main()
{
    map<string, int>d;
    string w;
    unsigned long int total;
    int m, n, usd;
    cin>>m>>n;
    for(int i = 0; i < m; i++){
        cin>>w>>usd;
        d[w] = usd;
    }

    for(int i = 0; i < m; i++){
        total = 0;
        while(cin>>w && w != ".")
        {
            total += d[w];
            cout<<"paisi"<<endl;
        }
        cout<<total<<endl;
    }
    return 0;
}
