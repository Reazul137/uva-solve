#include <iostream>
#include<algorithm>

long long int n[3000000],i,j,t;
using namespace std;
int main()
{
    cin>>t;
    for(i=0;i<t;i++){
        if(t==0 ) break;
        cin>>n[i];
    }
    /*for(i=0;i< t-1;i++){
        for(j=0;j<t-1;j++){
            if(n[j]>n[j+1]){
                swap(n[j],n[j+1]);
            }
        }
    }*/
    sort(n,n+t);

    for(i=0;i<t;i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;

    return 0;
}
