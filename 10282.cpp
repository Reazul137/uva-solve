#include <bits/stdc++.h>

using namespace std;
int main()
{
    map<string, string> dictionary;

    string first, second;

    getline(cin, first);

    cout<<first<<endl;
    while(first != ""){
        stringstream ss(first);
        ss >> first >> second;
        dictionary[second] = first;
        getline(cin, first);
    }

    while(cin>>first){
        map<string, string>::iterator iter = dictionary.find(first);

        if(iter == dictionary.end()){
            cout<<"eh"<<endl;
        }

        else{
            cout<<iter->second<<endl;
        }
    }

}
