#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n;
    int ar[10000],ar2[10000];
    while(cin>>n){
        for(int i=1;i<=n;i++){
            cin>>ar[i];
        }
        for(int i=1;i<n;i++){
            ar2[i]= abs(ar[i+1]-ar[i]);
        }
        sort(ar2+1,ar2+n);
        int flag = 0;
        for(int j=1;j<n;j++){
            if(ar2[j]==j){
                flag++;
            }
        }
        if(flag==n-1){
            cout<<"Jolly"<<endl;
        }
        else{
            cout<<"Not jolly"<<endl;
        }
    }
    return 0;
}
