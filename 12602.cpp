#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
int main()
{
    char ar[30];
    int a,b,c,n,to,t,i;
    while(cin>>t){
        for(i=0; i<t;i++){
            scanf("%3s-%4d",ar,&n);
            a = (ar[0]-'A');
            b = (ar[1]-'A');
            c = (ar[2]-'A');
            to = a * 26 * 26 + b * 26 + c ;
            if(abs(n-to)<=100){
                printf("nice\n");
            }
            else{
                printf("not nice\n");
            }
        }
    }
    return 0;
}
