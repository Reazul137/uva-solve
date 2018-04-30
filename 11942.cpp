#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;
int main()
{
    int t,a[10];
    while(cin>>t){
        cout<<"Lumberjacks:"<<endl;
        for(int i=0; i<t; i++){
            for(int j=0; j<10; j++){
                cin>>a[j];
            }
            int k=0;
            int flag1 = 0, flag2 = 0;
            while(k<9){
                if(a[k]<a[k+1]){
                    flag1++;
                }
                else if(a[k]>a[k+1]){
                    flag2++;
                }
                k++;
            }
            if(flag1==9 || flag2==9){
                cout<<"Ordered"<<endl;
            }
            else{
                cout<<"Unordered"<<endl;
            }
        }
    }
    return 0;
}




