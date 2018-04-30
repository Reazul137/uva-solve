#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    char song[16][20]={ "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    char name[100][100];
    int n;
    while(scanf("%d",&n)== 1){
        int f=0;
        for(int i=0; i<n; i++){
            scanf("%s",name[i]);
        }
        int mod = n % 16;
        int div = n / 16;
        if(mod == 0){
            f = n;
        }
        else if(mod != 0){
            f = 16*(div + 1);
        }
        int j = 0, k = 0;
        for(int i = 0; i<f; i++){
            printf("%s: %s\n",name[j++],song[k++]);
            if(j==n) j = 0;
            if(k==16) k = 0;
        }
    }
    return 0;
}

