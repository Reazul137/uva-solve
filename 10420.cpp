#include <bits/stdc++.h>

using namespace std;
int main()
{
    string country, name;
    map<string,int>mp;
    int n;
    cin>>n;
    getchar();
    while(n--){
        cin>>country;
        getline(cin,name);
        mp[country]++;
    }
    map<string,int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
