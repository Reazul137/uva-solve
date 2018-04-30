#include <iostream>
//#include <cstdio>

using namespace std;
int main()
{
    int i,j,k,test_case,L,n[10000],flag;
    cin>>test_case;
    //scanf("%d",&test_case);
    for(i=1;i<=test_case;i++){
        cin>>L;
        //scanf("%d",&L);
        for(j=0;j<L;j++){
            cin>>n[j];
            //scanf("%d",&n[j]);
        }
        int temp,k;
        flag = 0;
        for(j=0;j<L;j++){
            for(k = 0;k < L-1;k++){
                if(n[k]>n[k+1]){
                    swap(n[k],n[k+1]);
                    flag++;
                }
            }
        }
        //printf("Optimal train swapping takes %d swaps.\n",flag);
        cout<<"Optimal train swapping takes "<<flag<<" swaps."<<endl;

    }
    return 0;
}
