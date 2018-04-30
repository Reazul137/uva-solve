#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
int main()
{
    int n,num,numb;
    double numf;
    while(cin>>n){
        if(n==0) break;
        num = pow(n,1.0/3.0);
        cout<<num<<endl;
        if(num*num*num==n){
            printf("%d 0\n",num);
        }
        else{
            numb = (num+1)*(num+1)*(num+1)-n;
            cout<<numb<<endl;
            numf = pow(numb,1.0/3.0);
            cout<<numf<<endl;
            int nm=(int)(numf);
            if(nm*nm*nm==numb ){
                printf("%d %d\n",num+1,(int)numf);
            }
            else{
                cout<<"No solution"<<endl;
            }
        }
    }
    return 0;
}
