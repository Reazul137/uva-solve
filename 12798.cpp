#include <iostream>

using namespace std;
int main()
{
    int n,m,i,j,tot_goal,fin_goal;
    int goal[1000];
    while(cin>>n>>m){
        fin_goal = 0;
        for(i=0;i<n;i++){
            tot_goal = 0;
            for(j=0;j<m;j++){
                cin>>goal[j];
                if(goal[j]>0){
                    tot_goal++;
                }
            }
            if(tot_goal==m){
                fin_goal++;
            }
        }
        cout<<fin_goal<<endl;
    }
    return 0;
}
