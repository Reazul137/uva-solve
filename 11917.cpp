#include <bits/stdc++.h>

using namespace std;
map<string, int> sparrow;
int main()
{
    int tc;
    string name, subjectname;
    int n,dur,deadline;
    cin>>tc;
    for(int i = 1; i <= tc; i++)
    {
        sparrow.clear();
        cin>>n;
        for(int j = 0; j < n; j++)
        {
            cin>>name>>dur;
            sparrow.insert(pair<string,int>(name, dur));
        }
        cin>>deadline>>subjectname;
        map<string,int>::iterator it;
        it = sparrow.find(subjectname);
        cout<<"Case "<< i <<": ";
        if ( (it == sparrow.end()) || (it->second > deadline + 5) ){
			cout << "Do your own homework!" << endl;
		}
		else if (it->second <= deadline){
			cout << "Yesss" << endl;
		}
		else if (it->second <= deadline + 5){
			cout << "Late" << endl;
		}

    }
}
