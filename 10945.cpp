#include <bits/stdc++.h>

using namespace std;
int main()
{
    string ara,pal;
    while(getline(cin,ara)){
        if( ara.compare(0,4,"DONE") == 0) break;
        int l = ara.length();
        int j = 0;
        cout<<l<<endl;
        for(int i = 0; i < l ; i++){
            if(isalpha(ara[i])){
                if(isupper(ara[i])){
                    ara[i] += 32;
                    pal[j] = ara[i];
                    cout<<pal[j];
                    j++;
                }
                else{
                    pal[j] = ara[i];
                    j++;
                    cout<<pal[j];
                }

            }
        }
        cout<<endl;
        cout<<j<<endl;
//        int mid = j / 2;
//        int flag = 0;
//        int p = j - 1;
//        for(int i = 0; i < mid ; i++){
//            if(pal[i] == pal[p]){
//                flag++;
//            }
//            p--;
//        }
//        if(flag == mid){
//            printf("You won't be eaten!\n");
//        }
//        else{
//            printf("Uh oh..\n");
//        }
    }
    return 0;
}
