#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int t,n,cd;
    while(cin>>t){
        for(int i=1; i<=t; i++){
            cin>>n;
            int total_m = 0, total_j = 0;
            for(int j=1; j<=n; j++){
                cin>>cd;
                int mile = cd, juice = cd;
                while(mile>=30){
                    mile -= 30;
                    total_m += 10;
                }
                if(mile<30){
                    total_m += 10;
                }
                while(juice>=60){
                    juice -= 60;
                    total_j += 15;
                }
                if(juice<60){
                    total_j += 15;
                }
            }
//            cout<<total_m<<endl;
//            cout<<total_j<<endl;
            if(total_m < total_j){
                printf("Case %d: Mile %d\n",i,total_m);
            }
            else if(total_j < total_m){
                printf("Case %d: Juice %d\n",i,total_j);
            }
            else if(total_j == total_m){
                printf("Case %d: Mile Juice %d\n",i,total_m);
            }
        }
    }
    return 0;
}

