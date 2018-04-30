#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, i = 1, ar[10010];
    while(scanf("%d",&n)!= EOF){
        ar[i] = n;
        sort(ar+1 , ar+i+1);
//        cout<<"res "<<endl;
        if(i % 2 == 0){
            printf("%d\n",(ar[i/2] + ar[i/2+1])/2);
        }
        else{
            printf("%d\n",ar[i/2+1]);
//            cout<<"i "<<i/2+1<<endl;
        }
        i++;
    }
    return 00;
}
