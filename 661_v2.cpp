#include <bits/stdc++.h>

using namespace std;
int flag[25], capacity[25];
int main()
{
    int maxi, cap, n, m, c, mline, blown, seq = 1;
    while(cin>>n>>m>>c)
    {
        if( n == 0 && m == 0 && c == 0) break;
        maxi = 0, cap = 0, blown = 0;
        memset(flag, 0, sizeof flag);
        for(int i = 0; i < n; i++)
        {
            cin>>capacity[i];
        }

        for(int i = 0; i < m; i++)
        {
            cin>>mline;
            if(flag[mline-1] == 0){
                cap += capacity[mline-1];
//                cout<<"cap "<<cap<<endl;
                flag[mline-1] = 1;
                if(cap > c)
                {
                    blown = 1;
//                    cout<<"blown"<<endl;
                }
                if( cap > maxi)
                {
                    maxi = cap;
                }
            }
            else{
                cap -= capacity[mline-1];
//                cout<<"cap "<<cap<<endl;
                flag[mline-1] = 0;
            }
        }

        printf("Sequence %d\n",seq++);
        if(blown == 1)
            printf("Fuse was blown.\n\n");
        else printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n",maxi);

    }
    return 0;
}
