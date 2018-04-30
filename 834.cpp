#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num,k;
    while(cin>>num>>k){
        cout<<"["<<num/k;
        num=num%k;
        swap(num,k);
        for(int i=0;i<num;i++){
            if(i==0)
            cout<<";";
            if(i>0)
            cout<<",";
            cout<<num/k;
            num=num%k;
            swap(num,k);
       }
       cout<<"]"<<endl;
    }
    return 0;
}
