#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    int n,i,T,j,a,p;
    int ara[10000];
    cin>>T;
    for(j=1;j<=T;j++){
        cin>>n;
         memset (ara, 0, sizeof ara);
        for(i=1;i<=n;i++){
            a = 0;
            p = i;
            while(p!=0){
                a = p%10;
                p = p/10;
                if(a%10==0){
                    ara[0]++;
                }
                else if(a%10==1){
                    ara[1]++;
                }
                else if(a%10==2){
                    ara[2]++;
                }
                else if(a%10==3){
                    ara[3]++;
                }
                else if(a%10==4){
                    ara[4]++;
                }
                else if(a%10==5){
                    ara[5]++;
                }
                else if(a%10==6){
                    ara[6]++;
                }
                else if(a%10==7){
                    ara[7]++;
                }
                else if(a%10==8){
                    ara[8]++;
                }
                else if(a%10==9){
                    ara[9]++;
                }
            }
        }
        for(i=0;i<=9;i++){
                cout<<ara[i];
                if(i!=9){
                    cout<<" ";
                }
            }
            cout<<endl;
    }
    return 0;
}


