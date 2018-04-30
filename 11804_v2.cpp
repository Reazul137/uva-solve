#include <bits/stdc++.h>

using namespace std;
struct player
{
    char name[32];
    int att, def;
    bool operator<(const player x) const
    {
        return (att > x.att) || (att == x.att && def < x.def) || (att == x.att && def == x.def && strcmp(name, x.name) < 0);
    }

} p[16];

bool sortname(const player y, const player x)
{
    return strcmp(y.name, x.name) < 0;
}
int main(void)
{
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < 10; j++)
            scanf("%s %d %d", &p[j].name, &p[j].att, &p[j].def);
        sort(p, p + 10);
        sort(p, p + 5, sortname);
        sort(p + 5, p + 10, sortname);
        printf("Case %d:\n", i);
        cout<<"(";
        for(int j = 0; j < 5; j++){
            cout<<p[j].name;
            if(j < 4) cout<<", ";
        }
        cout<<")"<<endl;
        cout<<"(";
        for(int j = 5; j < 10; j++){
            cout<<p[j].name;
            if(j < 9) cout<<", ";
        }
        cout<<")"<<endl;
    }
    return 0;
}
