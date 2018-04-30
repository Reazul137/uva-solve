#include <iostream>
//#include <cstdio>

using namespace std;
int main()
{
    int i,j,k,test_case,L,n[10000],low,high,flag;
    cin>>test_case;
    //scanf("%d",&test_case);
    for(i=1;i<=test_case;i++){
        cin>>L;
        //scanf("%d",&L);
        for(j=0;j<L;j++){
            cin>>n[j];
            //scanf("%d",&n[j]);
        }
        if(L==1){
            cout<<"Case "<<i<<": "<<0<<" "<<0<<endl;
        }
        else{
            low = 0,high=0,flag=0;
            for(j=0;j<(L-1);j++){
                if(n[j+1]>n[j]){
                    high++;
                }
                else if(n[j+1]<n[j]){
                    low++;
                }
            }
            //printf("Optimal train swapping takes %d swaps.\n",flag);
            cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
        }

    }
    return 0;
}

