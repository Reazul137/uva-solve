#include <iostream>

using namespace std;
int main()
{
    int n,a[5];
    while(cin>>n){
        int flag = 0;
        for(int i=0;i<5;i++){
            cin>>a[i];
            if(a[i]==n){
                flag++;
            }
        }
        if(flag==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<flag<<endl;
        }

    }
    return 0;
}

