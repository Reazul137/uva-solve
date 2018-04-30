#include <bits/stdc++.h>

using namespace std;
int main()
{
    int ar[] = {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
47045881, 64000000, 85766121};

    int num;

    while(cin>>num){
        int flag = 0;
        if(num == 0) break;
        int ln = sizeof(ar)/sizeof(int);
        cout<<ln<<endl;
        for(int i = 0; i < ln; i++)
        {
            if(ar[i] == num){
                flag = 1;
            }
        }
        if(flag == 1) cout<<"Special"<<endl;
        else cout<<"Ordinary"<<endl;
    }
}



