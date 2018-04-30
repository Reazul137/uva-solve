#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    int n,i,j,flag;
    int ara[10000];
    while(cin>>n){
        flag = 0;
        for(i=0;i<n;i++){
            cin>>ara[i];
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(ara[j]>ara[j+1]){
                    swap(ara[j],ara[j+1]);
                    flag++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<flag<<endl;
    }
    return 0;
}

