#include <bits/stdc++.h>

using namespace std;
long long int fac(long long int n)
{
    if(n == 0) return 1;
    else{
        return n*fac(n - 1);
    }
}
int fre[26];
char s[10000];
int main()
{
    int tc;
    char c;
    scanf("%d%c",&tc,&c);
    for(int i = 1; i <= tc; i++){
        memset(s,0,sizeof s);
        memset(fre,0,sizeof fre);
        scanf("%s",s);
        int l = strlen(s);
//        cout<<l<<endl;
        int val;
        int fl = 0;
        int arr[10000] = {0};
        for(int j = 0; j < l; j++){
            val = s[j] - 'A';
//            cout<<"s[j] "<<s[j];
            fre[val]++;
//            cout<<" "<<fre[val]<<endl;
        }
        for(int j = 0; j < 26; j++){
            if(fre[j] > 1){
                arr[fl] += fre[j];
                fl++;
            }
        }
//        cout<<"fl "<<fl<<endl;
        long long int div = 1,res,pass;
//        if(fl > 0){
//            for(int j = 0; j < fl; j++){
//                printf("%d ",arr[j]);
//            }
            for(int j = 0; j < fl; j++){
//                pass = arr[j];
                div *= fac(arr[j]);
            }
            res = fac(l) / div;
//        }
//        else{
//            res = fac(l);
//        }
//        cout<<div<<endl;
        printf("Data set %d: %lld\n",i,res);
    }
    return 0;
}

