#include <bits/stdc++.h>

using namespace std;
int main()
{
    int pos = 0;
    int longest = 0;
    string sentences[105];
    int t;
    cin>>t;
    getchar();
    for(int i = 0; i < t; i++){
        getline(cin, sentences[pos]);
        if (sentences[pos].size() > longest)
                longest = sentences[pos].size();
        pos++;
    }

    cout<<longest<<endl;
    for (int i = 0; i < longest; i++)
    {
        for (int j = pos - 1; j >= 0; j--)
        {
//            cout<<"i "<<i<<endl;
//            cout<<"sentences[j].size() "<<sentences[j].size()<<endl;
            if (sentences[j].size() > i)
                printf("%c",sentences[j][i]) ;
            else
                 printf(" ");

        }
        printf("\n");
    }
}
